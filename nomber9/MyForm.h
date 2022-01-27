#pragma once
#include <cmath> 
#include"About.h"
#include"Result of solution.h"
#include"DataBank.h"
#include "Error.h"

double Countincr = 0;//Увеличение шага
double Countdect = 0;//Уменьшение шага

double Smax;
double Smin=100000;
double Xmx = 0;
double Xmn = 0;

double Hmax = 0;
double Hmin = 1;
double xHmax;
double xHmin;

double xgrmax = 0;
double ygrmin = 1000000000000000;
double ygrmax = 0;

int k = 0;

int i_;
double edgeofmetod_;
double x1;
double I1;

namespace nomber9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;


	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  button1;
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;




	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;

	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;


	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Nstep;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  h_table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  x;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  I_tab;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  locpog;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::FontDialog^  fontDialog1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  lab;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::ToolTip^  toolTip2;
	private: System::Windows::Forms::Button^  button5;



	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Nstep = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->h_table = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->I_tab = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->locpog = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->lab = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip2 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Параметры задачи";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(3, -3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(196, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Параметры задачи Коши";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204), true));
			this->label3->Location = System::Drawing::Point(6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Параметры метода";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 21);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(220, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Коэффициент самоиндукции - L";
			this->label4->UseWaitCursor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 56);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(134, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Сопротивление - R";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 87);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(160, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Напряжение в цепи - V";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(3, 29);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(174, 17);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Начальная сила тока - I0";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 28);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(140, 17);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Начальный шаг - h0";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 63);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(214, 17);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Максимальное число шагов - N";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(243, 20);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(122, 22);
			this->textBox1->TabIndex = 11;
			this->textBox1->Text = L"9";
			this->toolTip2->SetToolTip(this->textBox1, L"0<=L<10^(20)");
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(243, 51);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(122, 22);
			this->textBox2->TabIndex = 12;
			this->textBox2->Text = L"1";
			this->toolTip2->SetToolTip(this->textBox2, L"10^(-10)<R<10^(18)");
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(243, 82);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(122, 22);
			this->textBox3->TabIndex = 13;
			this->textBox3->Text = L"0";
			this->toolTip2->SetToolTip(this->textBox3, L"0<=V<10^(18)");
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(227, 24);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(122, 22);
			this->textBox4->TabIndex = 14;
			this->textBox4->Text = L"6";
			this->toolTip2->SetToolTip(this->textBox4, L"0<=I0<10^(18)");
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(412, 63);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(135, 17);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Параметр ЛП (eps)";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(412, 28);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(235, 17);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Контроль локальной погрешности";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Да", L"Нет" });
			this->comboBox1->Location = System::Drawing::Point(700, 21);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(122, 24);
			this->comboBox1->TabIndex = 17;
			this->comboBox1->Text = L"Да";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(227, 20);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(122, 22);
			this->textBox5->TabIndex = 18;
			this->textBox5->Text = L"0,01";
			this->toolTip1->SetToolTip(this->textBox5, L"10^(-16)<h<10^18");
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(227, 60);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(122, 22);
			this->textBox6->TabIndex = 19;
			this->textBox6->Text = L"1000";
			this->toolTip2->SetToolTip(this->textBox6, L"0<N<3*10^(6)");
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(8, 157);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(195, 32);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Произвести расчёт";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(807, 134);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(888, 590);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Nstep,
					this->h_table, this->x, this->I_tab, this->locpog, this->Column3, this->Column1, this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(8, 232);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(792, 493);
			this->dataGridView1->TabIndex = 21;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Nstep
			// 
			this->Nstep->HeaderText = L"№ шага";
			this->Nstep->Name = L"Nstep";
			this->Nstep->Width = 50;
			// 
			// h_table
			// 
			this->h_table->HeaderText = L"h(n-1)";
			this->h_table->Name = L"h_table";
			this->h_table->Width = 70;
			// 
			// x
			// 
			this->x->HeaderText = L"Xn";
			this->x->Name = L"x";
			// 
			// I_tab
			// 
			this->I_tab->HeaderText = L"In";
			this->I_tab->Name = L"I_tab";
			// 
			// locpog
			// 
			this->locpog->HeaderText = L"S* ";
			this->locpog->Name = L"locpog";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"In удв.";
			this->Column3->Name = L"Column3";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Ум. шага";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 60;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Ув. шага";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 60;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(209, 157);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(208, 34);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Точное решение";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1727, 24);
			this->menuStrip1->TabIndex = 23;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(61, 4);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(0, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(163, 30);
			this->button3->TabIndex = 26;
			this->button3->Text = L"Справка";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(8, 194);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(195, 32);
			this->button4->TabIndex = 27;
			this->button4->Text = L"Результаты расчёта";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(858, 23);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(114, 17);
			this->label12->TabIndex = 28;
			this->label12->Text = L"Правая граница";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click_1);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(858, 63);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(249, 17);
			this->label13->TabIndex = 29;
			this->label13->Text = L"Точность выхода на правую границу";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(700, 60);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(122, 22);
			this->textBox7->TabIndex = 30;
			this->textBox7->Text = L"0,001";
			this->toolTip2->SetToolTip(this->textBox7, L"10^(-16)<eps<10^(20)");
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(1124, 25);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(122, 22);
			this->textBox8->TabIndex = 31;
			this->textBox8->Text = L"10";
			this->toolTip2->SetToolTip(this->textBox8, L"oт 10^(-16) до 10^(20)");
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(1124, 60);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(122, 22);
			this->textBox9->TabIndex = 32;
			this->textBox9->Text = L"0,03";
			this->toolTip2->SetToolTip(this->textBox9, L"oт 10^(-16) до 1");
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Location = System::Drawing::Point(423, 33);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1272, 94);
			this->groupBox1->TabIndex = 33;
			this->groupBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->lab);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Location = System::Drawing::Point(8, 33);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(409, 121);
			this->groupBox2->TabIndex = 34;
			this->groupBox2->TabStop = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(371, 87);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(17, 17);
			this->label17->TabIndex = 36;
			this->label17->Text = L"В";
			// 
			// lab
			// 
			this->lab->AutoSize = true;
			this->lab->Location = System::Drawing::Point(371, 20);
			this->lab->Name = L"lab";
			this->lab->Size = System::Drawing::Size(24, 17);
			this->lab->TabIndex = 36;
			this->lab->Text = L"Гн";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(371, 56);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(28, 17);
			this->label16->TabIndex = 38;
			this->label16->Text = L"Ом";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Controls->Add(this->maskedTextBox1);
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Location = System::Drawing::Point(423, 133);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(377, 93);
			this->groupBox3->TabIndex = 35;
			this->groupBox3->TabStop = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(354, 59);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(15, 17);
			this->label20->TabIndex = 41;
			this->label20->Text = L"с";
			this->toolTip1->SetToolTip(this->label20, L"Не изменяемый параметр");
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(354, 27);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(17, 17);
			this->label19->TabIndex = 40;
			this->label19->Text = L"А";
			this->label19->Click += gcnew System::EventHandler(this, &MyForm::label19_Click);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->maskedTextBox1->Enabled = false;
			this->maskedTextBox1->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->maskedTextBox1->Location = System::Drawing::Point(227, 55);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->ReadOnly = true;
			this->maskedTextBox1->Size = System::Drawing::Size(122, 22);
			this->maskedTextBox1->TabIndex = 32;
			this->maskedTextBox1->Text = L"0";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(398, 61);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(15, 17);
			this->label18->TabIndex = 39;
			this->label18->Text = L"с";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(3, 59);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(152, 17);
			this->label14->TabIndex = 38;
			this->label14->Text = L"Начальное время - x0";
			this->toolTip1->SetToolTip(this->label14, L"Не изменяемый параметр");
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(398, 24);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(17, 17);
			this->label15->TabIndex = 37;
			this->label15->Text = L"А";
			// 
			// toolTip1
			// 
			this->toolTip1->AutomaticDelay = 5;
			this->toolTip1->AutoPopDelay = 10000;
			this->toolTip1->InitialDelay = 5;
			this->toolTip1->ReshowDelay = 1;
			this->toolTip1->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->toolTip1->ToolTipTitle = L"Диапазон:";
			// 
			// toolTip2
			// 
			this->toolTip2->AutomaticDelay = 5;
			this->toolTip2->AutoPopDelay = 10000;
			this->toolTip2->InitialDelay = 5;
			this->toolTip2->ReshowDelay = 1;
			this->toolTip2->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->toolTip2->ToolTipTitle = L"Допустимая область значений:";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(209, 194);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(208, 32);
			this->button5->TabIndex = 36;
			this->button5->Text = L"Очистить график";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1727, 737);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->zedGraphControl1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->Text = L"Задача 9(Вариант 5), группа 381903_3, Громова";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double f(double I_, double R_, double V_, double L_)
		{
			double fun = ((V_ - R_ * I_) / L_);
			return fun;
		}
		double RungeKutta(double h, double R_, double V_, double L_, double I_, double& Idouble)
		{
			double coef[3];
			double res;
			coef[0] = f(I_, R_, V_, L_);
			coef[1] = f(I_ + (0.5 * h * coef[0]), R_, V_, L_);
			coef[2] = f(I_ + h * (-coef[0] + 2 * coef[1]), R_, V_, L_);
			res = I_ + h / 6 * (coef[0] + 4 * coef[1] + coef[2]);
			return res;
		}
		//Точное решение exact solution
		double ExactSolution(double I_, double R_, double V_, double L_, double C, double x)
		{
			double I = (V_ - C * exp(-(R_ * x / L_))) / R_;
			return I;
		}
		double CauchyProblem(double I_, double R_, double V_)
		{
			double C = V_ - I_ * R_;
			return C;
		}

		double Step(double h, double R_, double V_, double L_, double I_, double& Idouble)
		{
			//обычный шаг
			double rk1 = RungeKutta(h, R_, V_, L_, I_, Idouble);
			double  S;

			//половинный шаг
			double rk2;
			h = h / 2;
			for (int i = 0; i < 2; i++)//половиный шаг
			{
				rk2 = RungeKutta(h, R_, V_, L_, I_, Idouble);
				I_ = rk2;
				if (i == 1)
				{
					Idouble = rk2;
				}
			}
			//Сравниваем 
			S = abs(rk2 - rk1);
			S = S / 7.0;
			return S;
		}

		double Fun(double& h, double& x, double eps, double& errorLoc, double R_, double V_, double L_, double I_, double diap, double& Idouble, double k)							
		{
			double S;
			double rk1;
			S = Step(h, R_, V_, L_, I_, Idouble);
			if (S > eps)
			{
				while (S > eps)
				{
					h = h / 2;
					S = Step(h, R_, V_, L_, I_, Idouble);
					if (k == 1)
					{
						Countdect++;
					}
				}
				errorLoc = S * 8.0;
				x = x + h;
				if (k == 1)
				{
					if (S > Smax&& x != 0)
					{
						Smax = S;
						Xmx = x;
					}
					if (S < Smin && x != 0)
					{
						Smin = S;
						Xmn = x;
					}
				}
				rk1 = RungeKutta(h, R_, V_, L_, I_, diap);
				return rk1;
			}
			else
			{
				if (S < (eps / 16.0))
				{
					errorLoc = S * 8.0;
					x = x + h;
					if (k == 1)
					{
						if (S > Smax&& x != 0)
						{
							Smax = S;
							Xmx = x;
						}
						if (S < Smin && x != 0)
						{
							Smin = S;
							Xmn = x;
						}
					}
					if (k == 1)
					{
						Countincr++;
					}
					rk1 = RungeKutta(h, R_, V_, L_, I_, diap);
					h = 2.0 * h;
					return  rk1;

				}
				else
				{
					errorLoc = S * 8.0;
					x = x + h;
					if (k == 1)
					{
						if (S > Smax&& x != 0)
						{
							Smax = S;
							Xmx = x;
						}
						if (S < Smin && x != 0)
						{
							Smin = S;
							Xmn = x;
						}
						rk1 = RungeKutta(h, R_, V_, L_, I_, diap);
						return rk1;
					}
				}
			}
		}
		/*double ErrorControl(double& h, double R_, double V_, double L_, double I0, double diap, double eps, double& errorLoc, double& x, double& Idouble, int k)//(h, R, V, L, I0, edgeofmetod, eps, errorLoc, x, Idouble,1);		
		{
				//обычный шаг
                double rk1 = RungeKutta(h, R_, V_, L_, I0, diap);
				double  I, I_, S;

				//половинный шаг
				I_ = I0;
				double rk2;
				for (int i = 0; i < 2; i++)//половиный шаг
				{
					rk2 = RungeKutta(h*0.5, R_, V_, L_, I_, diap);
					I_ = rk2;
					if (i == 1)
					{
						Idouble = rk2;
					}
				}

				//Сравниваем 
				S = abs(rk2 - rk1);
				S = S / 7.0;
				errorLoc = S * 8.0;//для S*

				//Для вычисления Smax,Smin
				if (k == 1)
				{
					if (S > Smax&& x != 0)
					{
						Smax = S;
						Xmx = x;
					}
					if (S < Smin && x != 0)
					{
						Smin = S;
						Xmn = x;
					}
				}

				if (S > eps)
				{
					if (k == 1)
					{
						Countdect++;
					}
					h = h / 2;
					ErrorControl(h, R_, V_, L_, I0, diap, eps, errorLoc, x,  Idouble, k);
					x = x + h;
					return rk1;

				}
				else
				{
					I0 = I;
					if (S < (eps / 16))
					{
						if (k == 1)
						{
							Countincr++;
						}
						x = x + h;
						h = 2 * h;
						return  rk1;
					}
					else
					{
						x = x + h;
						return rk1;
					}
				}
		}
		*/
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		zedGraphControl1->Invalidate();
		GraphPane^ panel = zedGraphControl1->GraphPane;
		// Имена
//panel->CurveList->Clear();
		panel->Title->Text = "График зависимости силы тока от времени"; //название графика
		panel->XAxis->Title->Text = "х - время";
		panel->YAxis->Title->Text = "I - сила тока";
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();//Список для точек графика


		Countincr = 0;//Увеличение шага
		Countdect = 0;//Уменьшение шага
		//Параметры задачи
		double V = Convert::ToDouble(textBox3->Text);
		double R = Convert::ToDouble(textBox2->Text);
		double L = Convert::ToDouble(textBox1->Text);
		//Задача Коши
		double xmin = 0;
		double x = xmin;
		double I0 = Convert::ToDouble(textBox4->Text);

		//Параметры метода
		double h = Convert::ToDouble(textBox5->Text);
		int N = Convert::ToDouble(textBox6->Text);

		double edgeofmetod = Convert::ToDouble(textBox8->Text);//Правая граница
		double diap = Convert::ToDouble(textBox9->Text);
		edgeofmetod_ = edgeofmetod;

		//Для вывода в таблицу
		int i = 0;
		double errorLoc;
		double Idouble = 0;//значение с двойным шагом

		double xmin_limit = xmin;

		//Подготавливаем все для таблицы
		dataGridView1->Rows->Clear();
		dataGridView1->Rows->Add();
		dataGridView1->Rows[i]->Cells[0]->Value = i;
		dataGridView1->Rows[i]->Cells[2]->Value = x;
		dataGridView1->Rows[i]->Cells[3]->Value = I0;
		dataGridView1->Rows[i]->Cells[1]->Value = "-";

		//добавим точку в наш список
		f1_list->Add(x, I0);

		//Max/Min у для отрисовки графика
		double ymax = 0;
		double ymin = I0;
		double eps;
		if (comboBox1->SelectedIndex != 1)
		{
			eps = Convert::ToDouble(textBox7->Text);
		}

		Error^ F = gcnew Error();//Для вызова диалогового окна со справкой
		int q = 1;

		if (textBox1->Text == "" ||(L < pow(10, -10))||(L > pow(10, 18)))
		{
			q = 0;
			//F->ShowDialog();
			textBox1->Text == "1";
		}


		if (textBox2->Text == "" || R < pow(10, -10) || R > pow(10, 18))
		{
			q = 0;
			//F->ShowDialog();
			textBox2->Text == "1";
		}


		if (textBox3->Text == "" || (V < 0) || V > pow(10, 18))
		{
			q = 0;
			//F->ShowDialog();
			textBox3->Text == "1";
		}

		if (textBox4->Text == "" || I0 < 0 || I0 > pow(10, 18))
		{
			q = 0;
			//F->ShowDialog();
			textBox4->Text == "1";
		}

		if (textBox5->Text == "" || h <pow(10, -16) || h > pow(10, 18))
		{
			q = 0;
			//F->ShowDialog();
			textBox5->Text == "1";
		}

		if (textBox6->Text == "" || N <1 || N > pow(10, 18))
		{
			q = 0;
			//F->ShowDialog();
			textBox6->Text == "1000";
		}

		if (textBox9->Text == "" || diap < pow(10, -16) || diap >= 1)
		{
			q = 0;
			//F->ShowDialog();
			textBox9->Text == "0,01";
		}

		if (textBox8->Text == "" || edgeofmetod  <pow(10, -16) || edgeofmetod  > pow(10, 18))
		{
			q = 0;
			//F->ShowDialog();
			textBox9->Text == "0,01";
		}

		if (comboBox1->SelectedIndex != 1)
		{

			if (textBox7->Text == "" || eps <pow(10, -16) || eps  > pow(10, 18))
			{
				q = 0;	
				textBox7->Text == "0,01";
			}
		}
		if (q == 0)
		{
			F->ShowDialog();
		}

		if (q == 1)
		{
			//Локальная погрешность-нет
			if (comboBox1->SelectedIndex == 1)
			{
				i = 0;
				xHmax = h;
				xHmin = h;
				while(i < N&&x<edgeofmetod-0.01*diap)
				{
					if ((x > (edgeofmetod - diap)) && (x < edgeofmetod))
					{
						break;
					}
					else
					{
						if ((x + h) > edgeofmetod)
						{
							while (((x + h) > edgeofmetod) && (x < (edgeofmetod - diap)))
							{
								h /= 2.0;
								Countdect++;
								xHmin = h;
							}
							x = x + h;
							I0 = RungeKutta(h, R, V, L, I0, Idouble);
							if (I0 > ymax)
							{
								ymax = I0;
							}
							if (I0 < ymin)
							{
								ymin = I0;
							}
							if (I0 > ygrmax)
							{
								ygrmax = I0;
							}
							if (I0 < ygrmin)
							{
								ygrmin = I0;
							}

							//i++;
						}
						else
						{
							x = x + h;
							I0 = RungeKutta(h, R, V, L, I0, Idouble);
						}
						if (x < (edgeofmetod - diap))
						{
							//I0 = RungeKutta(h, R, V, L, I0, edgeofmetod);
							f1_list->Add(x, I0);//добавим точку в наш список
							if (I0 > ymax)
							{
								ymax = I0;
							}
							if (I0 < ymin)
							{
								ymin = I0;
							}


							//i++;
							//Печатаем все в таблицу
							
						}
						if (I0 > ygrmax)
						{
							ygrmax = I0;
						}
						if (I0 < ygrmin)
						{
							ygrmin = I0;
						}
					}
					i++;
					dataGridView1->Rows->Add();
					dataGridView1->Rows[i]->Cells[0]->Value = i;
					dataGridView1->Rows[i]->Cells[2]->Value = x;
					dataGridView1->Rows[i]->Cells[3]->Value = I0;
					dataGridView1->Rows[i]->Cells[1]->Value = h;

				}
				
				Hmax = h;
				/*
				if (x1 < edgeofmetod - 1.04* diap&&i!=N)
				{
					while ((x1 < edgeofmetod - diap)&&i<N)
					{
						while (x1 + h > edgeofmetod - diap)
						{
							h = h / 2;
							Countdect++;//Но хз
						}
						I0 = RungeKutta(h, R, V, L, I0, edgeofmetod);
						if (I0 > ygrmax)
						{
							ygrmax = I0;
						}
						if (I0 < ygrmin)
						{
							ygrmin = I0;
						}
						f1_list->Add(x1, I0);//добавим точку в наш список
						x1 = x1 + h;
						i_ = i++;
						dataGridView1->Rows->Add();
						dataGridView1->Rows[i]->Cells[0]->Value = i;
						dataGridView1->Rows[i]->Cells[2]->Value = x1;
						dataGridView1->Rows[i]->Cells[3]->Value = I0;
						dataGridView1->Rows[i]->Cells[1]->Value = h;
					}
				}*/
				x1 = x;
				I1 = I0;
				i_ = i;
				Hmin = h;
				if (x1 > xgrmax)
					xgrmax = x1;
				edgeofmetod_ = x;
			}
			else
			{
				dataGridView1->Rows[0]->Cells[4]->Value = "-";
				dataGridView1->Rows[0]->Cells[5]->Value = "-";
				dataGridView1->Rows[0]->Cells[6]->Value = "-";
				dataGridView1->Rows[0]->Cells[7]->Value = "-";
				double x1;
				i = 1;
				double hh;
				double h1 = h;
				while( i < N&&x< edgeofmetod)
				{
					double flag = 0;
					if((x > (edgeofmetod - diap)) && (x < edgeofmetod))
					{
						break;
					}
					else
					{
						if ((x + h) > edgeofmetod)
						{
							/*
							while (((x + h) > edgeofmetod) && (x < (edgeofmetod - diap)))
							{
								h /= 2.0;
							}
							I0 = Fun(h, R, V, L, I0, edgeofmetod, eps, errorLoc, x, Idouble, 1);
							//x += h;
							*/

							while (((x + h) > edgeofmetod) && (x < (edgeofmetod - diap)))
							{
								h /= 2.0;
								Countdect++;
							}
							double rk2, I_ = I0;
							I0 = RungeKutta(h, R, V, L, I0, Idouble);
							double rk1 = RungeKutta(2 * h, R, V, L, I_, Idouble);

							//I0 = rk1;
							for (int j = 0; j < 2; j++)//половиный шаг
							{
								rk2 = RungeKutta(h, R, V, L, I_, Idouble);
								I_ = rk2;
								if (j == 1)
								{
									Idouble = rk2;
								}
							}
							//Сравниваем 
							double S = abs(rk2 - rk1);
							S = S / 7.0;
							errorLoc = S * 8.0;//для S*
							x += h;
						}
						else
						{
							//I0 = ErrorControl(h, R, V, L, I0, edgeofmetod, eps, errorLoc, x, Idouble, 1);
							//xn += h;
							h1 = h;
							hh = h;
							I0 = Fun(h, x, eps, errorLoc, R, V, L, I0, edgeofmetod, Idouble, 1);
						}

					}
					//f1_list->Add(x, I0);//добавим точку в наш список
					//i++;
					if (I0 > ygrmax)
					{
						ygrmax = I0;
					}
					if (I0 < ygrmin)
					{
						ygrmin = I0;
					}
					/*if (x > (edgeofmetod - diap))
					{
						x1 = x - h;
						break;
					}*/

					if (h < Hmin)//для таблицы
					{
						Hmin = h;
						xHmin = x + h;
					}
					if (h > Hmax)
					{
						Hmax = h;
						xHmax = x + h;
					}// Hmax, Hmin, xHmax, xHmin
					
					if (h > h1)
					{
						hh = h;
						h = h1;
						flag = 1;
					}
					//cout << i << "  " << h << "  " << x << "    " << "    " << errorLoc << "    " << endl;
					if (flag == 1)
					{
						h = h * 2;
					}
					flag = 0;
					dataGridView1->Rows->Add();
					dataGridView1->Rows[i]->Cells[0]->Value = i;
					dataGridView1->Rows[i]->Cells[2]->Value = x;
					dataGridView1->Rows[i]->Cells[3]->Value = I0;
					dataGridView1->Rows[i]->Cells[1]->Value = h;
					dataGridView1->Rows[i]->Cells[4]->Value = errorLoc;
					dataGridView1->Rows[i]->Cells[5]->Value = Idouble;
					dataGridView1->Rows[i]->Cells[6]->Value = Countdect;
					dataGridView1->Rows[i]->Cells[7]->Value = Countincr;
					f1_list->Add(x, I0);
					i++;
					h = hh;
				}
				//i_ = i;
				//x1 = x;
				//I1 = I0;
				/*if (x1 < edgeofmetod - 1.07 * diap&& i!=N)
				{
					while (x1 < edgeofmetod -  diap&&i!=N)//diap
					{
						while (x1 + h > edgeofmetod - diap)
						{
							h = h / 2;
							Countdect++;//Но хз
						}
						if (I1 > ygrmax)
						{
							ygrmax = I1;
						}
						if (I1 < ygrmin)
						{
							ygrmin = I1;
						}
						double rk1 = RungeKutta(2*h, R, V, L, I0, diap);
						double  I, I_, S;
						//половинный шаг
						I_ = I1;
						double rk2;
						double Ie;
						for (int k= 0; k < 2; k++)//половиный шаг
						{
							rk2 = RungeKutta(h, R, V, L, I_, diap);
							I_ = rk2;
							if (k = 1)
							{
								Ie = rk2;
							}
						}
						//Сравниваем 
						S = (abs(I_ - rk1))/7;
						errorLoc = S * 8;//для S*
						x1 = x1 + h;
						i_ = i++;
						I0 = RungeKutta(h, R, V, L, I0, edgeofmetod);
						dataGridView1->Rows->Add();
						dataGridView1->Rows[i]->Cells[0]->Value = i;
						dataGridView1->Rows[i]->Cells[2]->Value = x1;
						dataGridView1->Rows[i]->Cells[3]->Value = I0;
						dataGridView1->Rows[i]->Cells[1]->Value = h;
						dataGridView1->Rows[i]->Cells[4]->Value = errorLoc;
						dataGridView1->Rows[i]->Cells[5]->Value = Ie;;
						dataGridView1->Rows[i]->Cells[6]->Value = Countdect;
						dataGridView1->Rows[i]->Cells[7]->Value = Countincr;
						f1_list->Add(x1, I0);
					}
				}*/
				edgeofmetod_ = x;
				i_ = i-1;

			}
			x1 = x;
			I1 = I0;
			if (x > xgrmax)
				xgrmax = x;
			ygrmax = ygrmax + h;
			ygrmin = ygrmin -  h;
			k = k % 10;
			switch (k) {
			case 0:
			{
				LineItem^ Curve1 = panel->AddCurve("I(x)", f1_list, Color::Blue, SymbolType::None);
				break;
			}
			case 1:
			{
				LineItem^ Curve1 = panel->AddCurve("I(x)", f1_list, Color::Coral, SymbolType::None);
				break;
			}
			case 2:
			{
				LineItem^ Curve1 = panel->AddCurve("I(x)", f1_list, Color::Khaki, SymbolType::None);
				break;
			}
			case 3: 
			{
				LineItem^ Curve1 = panel->AddCurve("I(x)", f1_list, Color::DarkGoldenrod, SymbolType::None);
				break;
			}
			case 4:
			{
				LineItem^ Curve1 = panel->AddCurve("I(x)", f1_list, Color::Yellow, SymbolType::None);
				break;
			}
			case 5:
			{
				LineItem^ Curve1 = panel->AddCurve("I(x)", f1_list, Color::YellowGreen, SymbolType::None);
				break;
			}
			case 6:
			{
				LineItem^ Curve1 = panel->AddCurve("I(x)", f1_list, Color::DarkSlateGray, SymbolType::None);
				break;
			}
			case 7:
			{
				LineItem^ Curve1 = panel->AddCurve("I(x)", f1_list, Color::Lime, SymbolType::None);
				break;
			}
			case 8:
			{
				LineItem^ Curve1 = panel->AddCurve("I(x)", f1_list, Color::PaleVioletRed, SymbolType::None);
				break;
			}
			case 9:
			{
				LineItem^ Curve1 = panel->AddCurve("I(x)", f1_list, Color::Blue, SymbolType::None);
				break;
			}
			}
			k++;
			panel->XAxis->Scale->Min = 0;
			panel->XAxis->Scale->Max = edgeofmetod_;
			

			panel->YAxis->Scale->Min = ygrmin;
			panel->YAxis->Scale->Max = ygrmax;

			zedGraphControl1->AxisChange();
			zedGraphControl1->Invalidate();
			edgeofmetod_ = edgeofmetod;
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{
	}
	private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	GraphPane^ panel1 = zedGraphControl1->GraphPane;
	double V = Convert::ToDouble(textBox3->Text);
	double R = Convert::ToDouble(textBox2->Text);
	double L = Convert::ToDouble(textBox1->Text);

	//Задача Коши
	double xmin = 0;
	double x = xmin;
	double xmin_limit = xmin;
	double I0 = Convert::ToDouble(textBox4->Text);

	//Параметры метода
	double h = Convert::ToDouble(textBox5->Text);
	int N = Convert::ToDouble(textBox6->Text);
	double edgeofmetod = Convert::ToDouble(textBox8->Text);//Правая граница
	double diap = Convert::ToDouble(textBox9->Text);

	PointPairList^ f_list = gcnew ZedGraph::PointPairList();//Список для точек графика
	f_list->Add(x, I0);
	int i = 0;
	double C = CauchyProblem(I0, R, V);
	if (comboBox1->SelectedIndex == 1)//без локальной погрешности
	{
		double edgeofmetod = Convert::ToDouble(textBox8->Text);//Правая граница
		double diap = Convert::ToDouble(textBox9->Text);
		for (; i < N&&x < edgeofmetod_;)
		{
			x = x + h;
			I0 = ExactSolution(I0, R, V, L, C, x);
			f_list->Add(x, I0);//добавим точку в наш список
			i++;
		}
		if (i != N && x < edgeofmetod - diap)
		{

			while ((x < edgeofmetod - diap) && i < N)
			{
				while (x + h > edgeofmetod - diap)
				{
					h = h / 2;
					//Countdect++;//Но хз
				}
				x = x + h;
				I0 = ExactSolution(I0, R, V, L, C, x);
				f_list->Add(x, I0);//добавим точку в наш список
			}
		}
	}
	else
	{
		/*
		{
			double m = ErrorControl(h, R, V, L, I0, edgeofmetod_, eps, r1, x, r2, 0);
			x = x + h;
			I0 = ExactSolution(I0, R, V, L, C, x);
			f_list->Add(x, I0);//добавим точку в наш список
			i++;
		}
		if (i != N && x < edgeofmetod - diap)
		{

			while ((x < edgeofmetod - diap) && i < N)
			{
				while (x + h > edgeofmetod - diap)
				{
					h = h / 2;
					Countdect++;//Но хз
				}
				x = x + h;
				I0 = ExactSolution(I0, R, V, L, C, x);
				f_list->Add(x, I0);//добавим точку в наш список
			}
		}
		*/


		double edgeofmetod = Convert::ToDouble(textBox8->Text);//Правая граница
		double diap = Convert::ToDouble(textBox9->Text);
		double eps = Convert::ToDouble(textBox7->Text);
		double r1 = 0, r2 = 0;//просто так
		for (; i < N&&x < edgeofmetod_;i++)
		{
			if ((x > (edgeofmetod - diap)) && (x < edgeofmetod_))
			{
				break;
			}
			else
			{
				if ((x + h) > edgeofmetod)
				{
					while (((x + h) > edgeofmetod) && (x < (edgeofmetod - diap)))
					{
						h /= 2.0;
						Countdect++;
					}
					double rk2, I_ = I0;
					double rk1 = RungeKutta(2 * h, R, V, L, I0, r1);
					x = x + h;
					I0 = ExactSolution(I0, R, V, L, C, x);
					f_list->Add(x, I0);//добавим точку в наш список

					//double rk1 = RungeKutta(2 * h, R, V, L, I0, r1);
					//I0 = rk1;
					for (int i = 0; i < 2; i++)//половиный шаг
					{
						rk2 = RungeKutta(h, R, V, L, I_, r1);
						I_ = rk2;

					}
					//Сравниваем 
					//double S = abs(rk2 - rk1);
					//S = S / 7.0;
				}
				else
				{
					double rk2, I_ = I0;
					double rk1 = RungeKutta(2 * h, R, V, L, I0, r1);
					//I0 = rk1;
					for (int i = 0; i < 2; i++)//половиный шаг
					{
						rk2 = RungeKutta(h, R, V, L, I_, r1);
						I_ = rk2;

					}
					//Сравниваем 
					double S = abs(rk2 - rk1);
					S = S / 7.0;
					if (S < (eps / 16.0))
					{
						
						x = x + h;
						I0 = ExactSolution(I0, R, V, L, C, x);
						h = 2.0 * h;
					}
					else
					{
						x = x + h;
						I0 = ExactSolution(I0, R, V, L, C, x);
					}
					//I0 = ErrorControl(h, R, V, L, I0, edgeofmetod, eps, errorLoc, x, Idouble, 1);
					//xn += h;
					//double h1 = h;
					//I0 = Fun(h, x, eps, r1, R, V, L, I0, edgeofmetod, r2, 1);
					f_list->Add(x, I0);
				}
			}
		}
	}
	LineItem^ Curve1 = panel1->AddCurve("I(x)-точное решение", f_list, Color::Red, SymbolType::None);
	panel1->XAxis->Scale->Min = 0;
	panel1->XAxis->Scale->Max =edgeofmetod_;
	panel1->YAxis->Scale->Min = ygrmin;
	panel1->YAxis->Scale->Max = ygrmax;

	// !!!
	// Устанавливаем интересующий нас интервал по оси Y
	//panel1->YAxis->Scale->Min = ymin_limit;
	//panel1->YAxis->Scale->Max = ymax_limit;

	// Вызываем метод AxisChange (), чтобы обновить данные об осях.
	// В противном случае на рисунке будет показана только часть графика,
	// которая умещается в интервалы по осям, установленные по умолчанию
	zedGraphControl1->AxisChange();
	zedGraphControl1->Invalidate();// Обновляем график
}
private: System::Void toolStripTextBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	About^ F1 = gcnew About();//Для вызова диалогового окна со справкой
	F1 -> ShowDialog();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->SelectedIndex == 0)
	{
		DataBank M(i_, edgeofmetod_, x1, I1, Smax, Smin, Xmx, Xmn, Countincr, Countdect, Hmax, Hmin, xHmax, xHmin);///////////////////////////////////////////////////////////
	}
	else
	{
		DataBank M(i_, edgeofmetod_, x1, I1, 0, 0, 0, 0, 0,0, Hmax, Hmin, 0, 0);
	}
	Resultofsolution^ F2 = gcnew Resultofsolution();//Для вызова диалогового окна со справкой
	F2->ShowDialog();
	/////////////
}
private: System::Void label12_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label19_Click(System::Object^  sender, System::EventArgs^  e)
{
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	GraphPane^ panel2 = zedGraphControl1->GraphPane;
	// Имена
	panel2->CurveList->Clear();
	zedGraphControl1->Invalidate();
	xgrmax = 0;
	ygrmin = 1000000000000000;
	ygrmax = 0;
	k = 0;
	
}
};
}