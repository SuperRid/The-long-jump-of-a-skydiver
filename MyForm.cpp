#include "MyForm.h"
#include <cmath>
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    PhysTask31::MyForm form;
    Application::Run(% form);
}

double PhysTask31::MyForm::f(double v, double k)
{
    return -g + v * v * k / m;
}

void PhysTask31::MyForm::RungeKutta()
{
    g = 9.81,pi = 4 * atan(1);
    stop = false;
    play = false;
    N = int(tmax / dt) + 2;
    x = new double[N + 1];
    v = new double[N + 1];
    double k[4];
    i = 0;
    t = 0;
    peregryzka = 0;
    v[0] = 0;
    x[0] = h0;

    double speedOpened = 0;
    bool parachuteOpened = false;
    double parachuteOpenTime = 0;
    double speedOpened1 = 0;

    do
    {
        if (stop) break;
        this->chart->Series[0]->Points->Clear();

        t = i * dt;

        if (play && !parachuteOpened) {
            parachuteOpened = true;
            parachuteOpenTime = t;
            speedOpened = -v[i];
        }

        if (play) koef = k2;
        else koef = k1;

        k[0] = f(v[i], koef) * dt;
        k[1] = f(v[i] + k[0] / 2, koef) * dt;
        k[2] = f(v[i] + k[1] / 2, koef) * dt;
        k[3] = f(v[i] + k[2], koef) * dt;

        x[i + 1] = x[i] + v[i] * dt + (1. / 6.) * (k[0] + k[1] + k[2]) * dt;
        v[i + 1] = v[i] + (1. / 6.) * (k[0] + 2 * k[1] + 2 * k[2] + k[3]);

        Ek = m * v[i] * v[i] / 2;
        Ep = m * g * x[i];
        this->chartx->Series[0]->Points->AddXY(t, x[i]);
        this->chartv->Series[0]->Points->AddXY(t, -v[i]);
        this->chartEk->Series[0]->Points->AddXY(t, Ek * 1e-4);
        this->chartEp->Series[0]->Points->AddXY(t, Ep * 1e-4);
        this->chartE->Series[0]->Points->AddXY(t, Ek+Ep);
       
        if (parachuteOpened && (t - parachuteOpenTime == 1.0)) {
            speedOpened1 = -v[i];
        }

        if (parachuteOpened && (t - parachuteOpenTime == 1.0))
        {
            peregryzka = ((speedOpened - speedOpened1) + g) / g;

            textBox1->Text = Convert::ToString(round(peregryzka * 1000)/1000.);
        }
       

        for (int j = 0; j <= 360; j += 20)
        {
            double angle = j * pi / 180;
            double xsh = 200 * cos(angle);
            double ysh = 200 * sin(angle) + x[i];
            this->chart->Series[0]->Points->AddXY(xsh, ysh);
        }

        Application::DoEvents();
        i++;
    } while (t <= tmax && x[i] >= 0);

    delete[] x;
    delete[] v;
}

void PhysTask31::MyForm::Simulate()
{
    // Инициализация параметров
    g = 9.81, pi = 4 * atan(1);
    N = int(tmax / dt) + 2;
    x = new double[N + 1];
    v = new double[N + 1];
    i = 0;
    t = 0;
    double height = 0;
    double k[4];
    double koef;
    bool foundSafeHeight = false;
    double safeHeight = 0;
    ve = 0;
    vex = 0;
    tdo, tdo1, tdo2 = 0;

    if (h0 >= 50) height = 50;
    else height = h0;

    do
    {
        x[0] = h0;
        v[0] = 0;

        t = i * dt;
        koef = k1;

        k[0] = f(v[i], koef) * dt;
        k[1] = f(v[i] + k[0] / 2, koef) * dt;
        k[2] = f(v[i] + k[1] / 2, koef) * dt;
        k[3] = f(v[i] + k[2], koef) * dt;

        x[i + 1] = x[i] + v[i] * dt + (1. / 6.) * (k[0] + k[1] + k[2]) * dt;
        v[i + 1] = v[i] + (1. / 6.) * (k[0] + 2 * k[1] + 2 * k[2] + k[3]);

        i++;
        if (x[i] >= height)
        {
            ve = v[i];
            tdo1 = t;
        }
    } while (x[i] >= height);

    for (height; height >= 0; height -= 1)  // уменьшение высоты с шагом 1 м
    {
        v[0] = ve;
        x[0] = height;
        i = 0;
        t = 0;

        do
        {
            t = i * dt;

            if (i == 0) koef = k1;
            else koef = k2;

            k[0] = f(v[i], koef) * dt;
            k[1] = f(v[i] + k[0] / 2, koef) * dt;
            k[2] = f(v[i] + k[1] / 2, koef) * dt;
            k[3] = f(v[i] + k[2], koef) * dt;

            x[i + 1] = x[i] + v[i] * dt + (1. / 6.) * (k[0] + k[1] + k[2]) * dt;
            v[i + 1] = v[i] + (1. / 6.) * (k[0] + 2 * k[1] + 2 * k[2] + k[3]);

            i++;
            if (x[i] >= 0)
            {
                vex = v[i];
                tdo2 = t;
            }
        } while (x[i] >= 0);

        if (-vex >= 7)
        {
            safeHeight = height + 1;
            tdo = tdo1 + tdo2;
            foundSafeHeight = true;
            break;
        }

        this->chartx->Series[0]->Points->Clear();
        this->chartv->Series[0]->Points->Clear();
    }

    if (foundSafeHeight)
    {
        MessageBox::Show("Минимальная безопасная высота раскрытия парашюта: " + safeHeight.ToString() + " м" +
            ", время после начала прыжка, через которе следует открывать парашют: " + tdo.ToString() + "с");
    }
    else
    {
        MessageBox::Show("Не удалось найти безопасную высоту раскрытия парашюта.");
    }

    delete[] x;
    delete[] v;
}

System::Void PhysTask31::MyForm::стартToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (s == 0)
    {
        m = 75, g = 9.81, vkr1 = 55, vkr2 = 6;
        k1 = m * g / (vkr1 * vkr1);
        k2 = m * g / (vkr2 * vkr2);
        h0 = 4000;
        dt = 0.1;
        tmax = 1000;
        textBoxh0->Text = Convert::ToString(h0);
        textBoxdt->Text = Convert::ToString(dt);
        textBoxtmax->Text = Convert::ToString(tmax);
        numericUpDown1->Text = Convert::ToString(m);
        textBoxk1->Text = Convert::ToString(round(k1*10000)/10000.);
        textBoxk2->Text = Convert::ToString(k2);

        this->chart->Series[0]->Points->Clear();

        chart->ChartAreas[0]->AxisX->Maximum = 3750;
        chart->ChartAreas[0]->AxisX->Minimum = -3750;

        chart->ChartAreas[0]->AxisY->Maximum = 5000;
        chart->ChartAreas[0]->AxisY->Minimum = 0;

        s++;
        Simulate();
        RungeKutta();
    }
    else
    {
        g = 9.81, vkr1 = 55, vkr2 = 6, pi = 4 * atan(1);
        h0 = Convert::ToInt32(textBoxh0->Text);
        tmax = Convert::ToInt32(textBoxtmax->Text);
        dt = Convert::ToDouble(textBoxdt->Text);
        m = Convert::ToDouble(numericUpDown1->Text);
        k1 = Convert::ToDouble(textBoxk1->Text);
        k2 = Convert::ToDouble(textBoxk2->Text);

        this->chart->Series[0]->Points->Clear();
        this->chartx->Series[0]->Points->Clear();
        this->chartv->Series[0]->Points->Clear();
        this->chartEk->Series[0]->Points->Clear();
        this->chartEp->Series[0]->Points->Clear();
        this->chartE->Series[0]->Points->Clear();

        textBox1->Text = "";

        chart->ChartAreas[0]->AxisX->Maximum = (h0 + 1000) *0.75;
        chart->ChartAreas[0]->AxisX->Minimum = -(h0 + 1000) *0.75;

        chart->ChartAreas[0]->AxisY->Maximum = h0 + 1000;
        chart->ChartAreas[0]->AxisY->Minimum = 0;

        Simulate();
        RungeKutta();
    }
}

System::Void PhysTask31::MyForm::стопToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    stop = true;
}

System::Void PhysTask31::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    play = true;
}
