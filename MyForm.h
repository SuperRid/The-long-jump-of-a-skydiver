#pragma once

namespace PhysTask31 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;

	protected:

	protected:

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ стартToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ стопToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxdt;
	private: System::Windows::Forms::TextBox^ textBoxtmax;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxh0;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartx;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartv;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartEk;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartEp;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartE;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxk1;
	private: System::Windows::Forms::TextBox^ textBoxk2;








	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->стартToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->стопToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxdt = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtmax = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxh0 = (gcnew System::Windows::Forms::TextBox());
			this->chartx = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartv = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->chartEk = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartEp = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartE = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxk1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxk2 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartx))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartv))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartEk))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartEp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartE))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart->Legends->Add(legend1);
			this->chart->Location = System::Drawing::Point(223, 64);
			this->chart->Name = L"chart";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			series1->YValuesPerPoint = 10;
			this->chart->Series->Add(series1);
			this->chart->Size = System::Drawing::Size(1000, 600);
			this->chart->TabIndex = 0;
			this->chart->Text = L"chart";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->стартToolStripMenuItem,
					this->стопToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1882, 30);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// стартToolStripMenuItem
			// 
			this->стартToolStripMenuItem->Name = L"стартToolStripMenuItem";
			this->стартToolStripMenuItem->Size = System::Drawing::Size(61, 26);
			this->стартToolStripMenuItem->Text = L"Cтарт";
			this->стартToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::стартToolStripMenuItem_Click);
			// 
			// стопToolStripMenuItem
			// 
			this->стопToolStripMenuItem->Name = L"стопToolStripMenuItem";
			this->стопToolStripMenuItem->Size = System::Drawing::Size(56, 26);
			this->стопToolStripMenuItem->Text = L"Стоп";
			this->стопToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::стопToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(52, 348);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 51);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Открыть парашют";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 64);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 25);
			this->label3->TabIndex = 7;
			this->label3->Text = L"dt  = ";
			// 
			// textBoxdt
			// 
			this->textBoxdt->Location = System::Drawing::Point(79, 68);
			this->textBoxdt->Name = L"textBoxdt";
			this->textBoxdt->Size = System::Drawing::Size(100, 22);
			this->textBoxdt->TabIndex = 8;
			// 
			// textBoxtmax
			// 
			this->textBoxtmax->Location = System::Drawing::Point(117, 106);
			this->textBoxtmax->Name = L"textBoxtmax";
			this->textBoxtmax->Size = System::Drawing::Size(100, 22);
			this->textBoxtmax->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 103);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 25);
			this->label1->TabIndex = 10;
			this->label1->Text = L"tmax  = ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 25);
			this->label2->TabIndex = 11;
			this->label2->Text = L"h0  = ";
			// 
			// textBoxh0
			// 
			this->textBoxh0->Location = System::Drawing::Point(79, 146);
			this->textBoxh0->Name = L"textBoxh0";
			this->textBoxh0->Size = System::Drawing::Size(100, 22);
			this->textBoxh0->TabIndex = 12;
			// 
			// chartx
			// 
			chartArea2->Name = L"ChartArea1";
			this->chartx->ChartAreas->Add(chartArea2);
			legend2->Enabled = false;
			legend2->Name = L"Legend1";
			this->chartx->Legends->Add(legend2);
			this->chartx->Location = System::Drawing::Point(223, 686);
			this->chartx->Name = L"chartx";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chartx->Series->Add(series2);
			this->chartx->Size = System::Drawing::Size(500, 300);
			this->chartx->TabIndex = 13;
			this->chartx->Text = L"chart1";
			title1->Name = L"Title1";
			title1->Text = L"Высота, м";
			this->chartx->Titles->Add(title1);
			// 
			// chartv
			// 
			chartArea3->Name = L"ChartArea1";
			this->chartv->ChartAreas->Add(chartArea3);
			legend3->Enabled = false;
			legend3->Name = L"Legend1";
			this->chartv->Legends->Add(legend3);
			this->chartv->Location = System::Drawing::Point(729, 686);
			this->chartv->Name = L"chartv";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chartv->Series->Add(series3);
			this->chartv->Size = System::Drawing::Size(500, 300);
			this->chartv->TabIndex = 14;
			this->chartv->Text = L"chartv";
			title2->Name = L"Title1";
			title2->Text = L"Скорость, м/с";
			this->chartv->Titles->Add(title2);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(169, 306);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(50, 22);
			this->textBox1->TabIndex = 15;
			// 
			// chartEk
			// 
			chartArea4->Name = L"ChartArea1";
			this->chartEk->ChartAreas->Add(chartArea4);
			legend4->Enabled = false;
			legend4->Name = L"Legend1";
			this->chartEk->Legends->Add(legend4);
			this->chartEk->Location = System::Drawing::Point(1282, 64);
			this->chartEk->Name = L"chartEk";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Legend = L"Legend1";
			series4->Name = L"Series1";
			this->chartEk->Series->Add(series4);
			this->chartEk->Size = System::Drawing::Size(500, 300);
			this->chartEk->TabIndex = 16;
			this->chartEk->Text = L"chart1";
			title3->Name = L"Title1";
			title3->Text = L"Кинетическая энергия, 10^4 Дж";
			this->chartEk->Titles->Add(title3);
			// 
			// chartEp
			// 
			chartArea5->Name = L"ChartArea1";
			this->chartEp->ChartAreas->Add(chartArea5);
			legend5->Enabled = false;
			legend5->Name = L"Legend1";
			this->chartEp->Legends->Add(legend5);
			this->chartEp->Location = System::Drawing::Point(1282, 370);
			this->chartEp->Name = L"chartEp";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series5->Legend = L"Legend1";
			series5->Name = L"Series1";
			this->chartEp->Series->Add(series5);
			this->chartEp->Size = System::Drawing::Size(500, 300);
			this->chartEp->TabIndex = 17;
			this->chartEp->Text = L"chart1";
			title4->Name = L"Title1";
			title4->Text = L"Потенциальная энергия, 10^4 Дж";
			this->chartEp->Titles->Add(title4);
			// 
			// chartE
			// 
			chartArea6->Name = L"ChartArea1";
			this->chartE->ChartAreas->Add(chartArea6);
			legend6->Enabled = false;
			legend6->Name = L"Legend1";
			this->chartE->Legends->Add(legend6);
			this->chartE->Location = System::Drawing::Point(1282, 686);
			this->chartE->Name = L"chartE";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series6->Legend = L"Legend1";
			series6->Name = L"Series1";
			this->chartE->Series->Add(series6);
			this->chartE->Size = System::Drawing::Size(500, 300);
			this->chartE->TabIndex = 18;
			this->chartE->Text = L"chart1";
			title5->Name = L"Title1";
			title5->Text = L"Полная энергия, 10^4 Дж";
			this->chartE->Titles->Add(title5);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(79, 188);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 80, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 70, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 22);
			this->numericUpDown1->TabIndex = 19;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 70, 0, 0, 0 });
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 185);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 25);
			this->label4->TabIndex = 20;
			this->label4->Text = L"m  = ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 308);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(145, 20);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Перегрузка  = ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(11, 229);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 25);
			this->label6->TabIndex = 22;
			this->label6->Text = L"k1  = ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(13, 265);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 25);
			this->label7->TabIndex = 23;
			this->label7->Text = L"k2  = ";
			// 
			// textBoxk1
			// 
			this->textBoxk1->Location = System::Drawing::Point(79, 233);
			this->textBoxk1->Name = L"textBoxk1";
			this->textBoxk1->Size = System::Drawing::Size(100, 22);
			this->textBoxk1->TabIndex = 24;
			// 
			// textBoxk2
			// 
			this->textBoxk2->Location = System::Drawing::Point(79, 269);
			this->textBoxk2->Name = L"textBoxk2";
			this->textBoxk2->Size = System::Drawing::Size(100, 22);
			this->textBoxk2->TabIndex = 25;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1882, 753);
			this->Controls->Add(this->textBoxk2);
			this->Controls->Add(this->textBoxk1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->chartE);
			this->Controls->Add(this->chartEp);
			this->Controls->Add(this->chartEk);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->chartv);
			this->Controls->Add(this->chartx);
			this->Controls->Add(this->textBoxh0);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxtmax);
			this->Controls->Add(this->textBoxdt);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartx))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartv))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartEk))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartEp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartE))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void стартToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void стопToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	   void RungeKutta();
	   void Simulate();
	   double f(double v, double k);
	   bool stop, play;
	   double angle, ysh,xsh, pi, g, k1, k2, m, dt, koef,t,ve, vex, tdo,tdo1, tdo2, peregryzka, Ek, Ep, E;
	   int h0, vkr1, vkr2,N, tmax,s=0,i;
	   double* v;
	   double* x;

};
}
