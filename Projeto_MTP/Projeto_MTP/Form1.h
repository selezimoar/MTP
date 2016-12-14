#include <math.h>

#pragma once

namespace Projeto_MTP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  text1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;



	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;


	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Button^  btncalc1;
	private: System::Windows::Forms::Button^  btncalc2;



	private: System::Windows::Forms::TextBox^  text2;


	private: System::Windows::Forms::TextBox^  text4;
	private: System::Windows::Forms::TextBox^  text5;
	private: System::Windows::Forms::TextBox^  text6;










	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;



	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;


	private: System::Windows::Forms::Label^  print1;
	private: System::Windows::Forms::Label^  print2;









	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->text1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->btncalc1 = (gcnew System::Windows::Forms::Button());
			this->btncalc2 = (gcnew System::Windows::Forms::Button());
			this->text2 = (gcnew System::Windows::Forms::TextBox());
			this->text4 = (gcnew System::Windows::Forms::TextBox());
			this->text5 = (gcnew System::Windows::Forms::TextBox());
			this->text6 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->print1 = (gcnew System::Windows::Forms::Label());
			this->print2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(47, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 41);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Homem";
			// 
			// text1
			// 
			this->text1->Location = System::Drawing::Point(171, 83);
			this->text1->Margin = System::Windows::Forms::Padding(4);
			this->text1->Name = L"text1";
			this->text1->Size = System::Drawing::Size(66, 22);
			this->text1->TabIndex = 1;
			this->text1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(8, 83);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Peso";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Peso";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(8, 271);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(78, 16);
			this->label7->TabIndex = 7;
			this->label7->Text = L"G. Corpotal:";
			this->label7->Click += gcnew System::EventHandler(this, &Form1::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(371, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(96, 31);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Mulher";
			this->label8->Click += gcnew System::EventHandler(this, &Form1::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(308, 83);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 18);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Idade";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(308, 83);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(43, 18);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Peso";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(8, 117);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(154, 16);
			this->label11->TabIndex = 3;
			this->label11->Text = L"Circunferencia abdomén";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(308, 117);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(42, 16);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Altura";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(308, 148);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(157, 16);
			this->label13->TabIndex = 4;
			this->label13->Text = L"Cincunferencia abodmén";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(308, 272);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(78, 16);
			this->label16->TabIndex = 7;
			this->label16->Text = L"G. Corpotal:";
			// 
			// btncalc1
			// 
			this->btncalc1->Location = System::Drawing::Point(92, 224);
			this->btncalc1->Name = L"btncalc1";
			this->btncalc1->Size = System::Drawing::Size(75, 23);
			this->btncalc1->TabIndex = 9;
			this->btncalc1->Text = L"Calcular";
			this->btncalc1->UseVisualStyleBackColor = true;
			this->btncalc1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// btncalc2
			// 
			this->btncalc2->Location = System::Drawing::Point(392, 224);
			this->btncalc2->Name = L"btncalc2";
			this->btncalc2->Size = System::Drawing::Size(75, 23);
			this->btncalc2->TabIndex = 9;
			this->btncalc2->Text = L"Calcular";
			this->btncalc2->UseVisualStyleBackColor = true;
			this->btncalc2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// text2
			// 
			this->text2->Location = System::Drawing::Point(171, 114);
			this->text2->Margin = System::Windows::Forms::Padding(4);
			this->text2->Name = L"text2";
			this->text2->Size = System::Drawing::Size(66, 22);
			this->text2->TabIndex = 1;
			// 
			// text4
			// 
			this->text4->Location = System::Drawing::Point(479, 79);
			this->text4->Margin = System::Windows::Forms::Padding(4);
			this->text4->Name = L"text4";
			this->text4->Size = System::Drawing::Size(66, 22);
			this->text4->TabIndex = 1;
			// 
			// text5
			// 
			this->text5->Location = System::Drawing::Point(479, 114);
			this->text5->Margin = System::Windows::Forms::Padding(4);
			this->text5->Name = L"text5";
			this->text5->Size = System::Drawing::Size(66, 22);
			this->text5->TabIndex = 1;
			// 
			// text6
			// 
			this->text6->Location = System::Drawing::Point(479, 145);
			this->text6->Margin = System::Windows::Forms::Padding(4);
			this->text6->Name = L"text6";
			this->text6->Size = System::Drawing::Size(66, 22);
			this->text6->TabIndex = 1;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(245, 91);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(23, 16);
			this->label17->TabIndex = 10;
			this->label17->Text = L"kg";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(244, 120);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(26, 16);
			this->label18->TabIndex = 10;
			this->label18->Text = L"cm";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(552, 85);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(23, 16);
			this->label22->TabIndex = 10;
			this->label22->Text = L"kg";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(552, 117);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(19, 16);
			this->label23->TabIndex = 10;
			this->label23->Text = L"m";
			this->label23->Click += gcnew System::EventHandler(this, &Form1::label23_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(552, 151);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(26, 16);
			this->label24->TabIndex = 10;
			this->label24->Text = L"cm";
			this->label24->Click += gcnew System::EventHandler(this, &Form1::label24_Click);
			// 
			// print1
			// 
			this->print1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->print1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->print1->Location = System::Drawing::Point(92, 271);
			this->print1->Name = L"print1";
			this->print1->Size = System::Drawing::Size(86, 16);
			this->print1->TabIndex = 11;
			this->print1->Text = L"0.00";
			// 
			// print2
			// 
			this->print2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->print2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->print2->Location = System::Drawing::Point(388, 272);
			this->print2->Name = L"print2";
			this->print2->Size = System::Drawing::Size(79, 16);
			this->print2->TabIndex = 11;
			this->print2->Text = L"0.00";
			this->print2->Click += gcnew System::EventHandler(this, &Form1::print2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(590, 313);
			this->Controls->Add(this->print2);
			this->Controls->Add(this->print1);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->btncalc2);
			this->Controls->Add(this->btncalc1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->text6);
			this->Controls->Add(this->text5);
			this->Controls->Add(this->text2);
			this->Controls->Add(this->text4);
			this->Controls->Add(this->text1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Calculadora de gordura corporal";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		double a,b,c,d,m,f, valor, val;
		char x;

#pragma endregion
	
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 

		 }
private: System::Void textBox11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label23_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label24_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			a = System::Convert::ToDouble(text1->Text);
			b = System::Convert::ToDouble(text2->Text);
			valor=(0.31457*b)-((0.10969*a)+(10.8336));
			print1->Text=System::Convert::ToString(valor);

			 
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 d = System::Convert::ToDouble(text4->Text);
			 m = 100*System::Convert::ToDouble(text5->Text);
			 f = System::Convert::ToDouble(text6->Text);
			 val=(0.11077*f)-(0.17666*m)+(0.14354*d)+51.03301;
			 print2->Text=System::Convert::ToString(val);

		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void print2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

