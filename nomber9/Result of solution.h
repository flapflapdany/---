#pragma once
#include"DataBank.h"

namespace nomber9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Resultofsolution
	/// </summary>
	public ref class Resultofsolution : public System::Windows::Forms::Form
	{
	public:
		Resultofsolution(void)
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
		~Resultofsolution()
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
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;

	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::GroupBox^  groupBox1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"N(индекс последнего шага)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Правая граница - XN";
			this->label2->Click += gcnew System::EventHandler(this, &Resultofsolution::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(171, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"XN (реальное значение)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 132);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"IN";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 164);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Max||S||";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 194);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Min||S||";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(208, 161);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 17);
			this->label7->TabIndex = 6;
			this->label7->Text = L"при Xn";
			this->label7->Click += gcnew System::EventHandler(this, &Resultofsolution::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(208, 197);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 17);
			this->label8->TabIndex = 7;
			this->label8->Text = L"при Xn";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 235);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(167, 17);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Всего уменьшений шага";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 264);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(163, 17);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Всего увеличений шага";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(12, 300);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(53, 17);
			this->label12->TabIndex = 11;
			this->label12->Text = L"Max hn";
			this->label12->Click += gcnew System::EventHandler(this, &Resultofsolution::label12_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(12, 331);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(50, 17);
			this->label13->TabIndex = 12;
			this->label13->Text = L"Min hn";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(208, 334);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(69, 17);
			this->label14->TabIndex = 13;
			this->label14->Text = L"при Xn+1";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label16->Location = System::Drawing::Point(3, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(72, 17);
			this->label16->TabIndex = 15;
			this->label16->Text = L"Обновить";
			this->label16->Click += gcnew System::EventHandler(this, &Resultofsolution::label16_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(208, 301);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(69, 17);
			this->label17->TabIndex = 16;
			this->label17->Text = L"при Xn+1";
			this->label17->Click += gcnew System::EventHandler(this, &Resultofsolution::label17_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(211, 17);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 22);
			this->textBox1->TabIndex = 17;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(662, 486);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 18;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(211, 53);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(140, 22);
			this->textBox3->TabIndex = 19;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(211, 94);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(140, 22);
			this->textBox4->TabIndex = 20;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(72, 127);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(130, 22);
			this->textBox5->TabIndex = 21;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(72, 161);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(130, 22);
			this->textBox6->TabIndex = 22;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(72, 192);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(130, 22);
			this->textBox7->TabIndex = 23;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(207, 235);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 22);
			this->textBox9->TabIndex = 25;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(207, 264);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 22);
			this->textBox10->TabIndex = 26;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(279, 159);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(127, 22);
			this->textBox11->TabIndex = 27;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(279, 194);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(127, 22);
			this->textBox12->TabIndex = 28;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(279, 297);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(127, 22);
			this->textBox13->TabIndex = 29;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(279, 331);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(127, 22);
			this->textBox14->TabIndex = 30;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(72, 295);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(130, 22);
			this->textBox15->TabIndex = 31;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(72, 326);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(130, 22);
			this->textBox16->TabIndex = 32;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox1->Location = System::Drawing::Point(310, 369);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(81, 21);
			this->groupBox1->TabIndex = 33;
			this->groupBox1->TabStop = false;
			// 
			// Resultofsolution
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(413, 398);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Resultofsolution";
			this->Text = L"Результат расчёта";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
		this->textBox1->Text = Convert::ToString(DataBank::N);
		this->textBox3->Text = Convert::ToString(DataBank::XN);
		this->textBox4->Text = Convert::ToString(DataBank::Xnreality); 
		this->textBox5->Text = Convert::ToString(DataBank::Vn); 
		this->textBox6->Text = Convert::ToString(DataBank::Smax);
		this->textBox7->Text = Convert::ToString(DataBank::Smin);
		this->textBox11->Text = Convert::ToString(DataBank::xSmax);
		this->textBox12->Text = Convert::ToString(DataBank::xSmin);
		this->textBox15->Text = Convert::ToString(DataBank::Hmax);
		this->textBox16->Text = Convert::ToString(DataBank::Hmin);
		this->textBox13->Text = Convert::ToString(DataBank::xHmax);
		this->textBox14->Text = Convert::ToString(DataBank::xHmin);
		this->textBox9->Text = Convert::ToString(DataBank::SumStepdecrease);
		this->textBox10->Text = Convert::ToString(DataBank::SumStepincrease);
	}
	private: System::Void label17_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}