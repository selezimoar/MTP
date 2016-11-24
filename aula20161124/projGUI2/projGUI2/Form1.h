#pragma once

namespace projGUI2 {
    
	#define MAXCHAR 17

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
	private: System::Windows::Forms::Label^  lbldisplay;
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btnmais;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  btnapaga;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btnmenos;
	private: System::Windows::Forms::Button^  btnfatorial;
	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btnx;
	private: System::Windows::Forms::Button^  btnpotencia;
	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btn;
	private: System::Windows::Forms::Button^  btn10;
	private: System::Windows::Forms::Button^  btndivisao;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  btnigual;
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
			this->lbldisplay = (gcnew System::Windows::Forms::Label());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnmais = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btnapaga = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnmenos = (gcnew System::Windows::Forms::Button());
			this->btnfatorial = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnx = (gcnew System::Windows::Forms::Button());
			this->btnpotencia = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btn = (gcnew System::Windows::Forms::Button());
			this->btn10 = (gcnew System::Windows::Forms::Button());
			this->btndivisao = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->btnigual = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbldisplay
			// 
			this->lbldisplay->BackColor = System::Drawing::Color::White;
			this->lbldisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lbldisplay->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbldisplay->Location = System::Drawing::Point(16, 21);
			this->lbldisplay->Name = L"lbldisplay";
			this->lbldisplay->Size = System::Drawing::Size(295, 42);
			this->lbldisplay->TabIndex = 0;
			this->lbldisplay->Text = L"0";
			this->lbldisplay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(12, 82);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(55, 52);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::btn7_Click);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(73, 82);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(55, 52);
			this->btn8->TabIndex = 1;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(134, 82);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(55, 52);
			this->btn9->TabIndex = 1;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::btn9_Click);
			// 
			// btnmais
			// 
			this->btnmais->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnmais->Location = System::Drawing::Point(195, 82);
			this->btnmais->Name = L"btnmais";
			this->btnmais->Size = System::Drawing::Size(55, 52);
			this->btnmais->TabIndex = 1;
			this->btnmais->Text = L"+";
			this->btnmais->UseVisualStyleBackColor = true;
			this->btnmais->Click += gcnew System::EventHandler(this, &Form1::btnmais_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(256, 82);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(55, 52);
			this->button4->TabIndex = 1;
			this->button4->Text = L"1";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// btnapaga
			// 
			this->btnapaga->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnapaga->Location = System::Drawing::Point(256, 82);
			this->btnapaga->Name = L"btnapaga";
			this->btnapaga->Size = System::Drawing::Size(55, 52);
			this->btnapaga->TabIndex = 1;
			this->btnapaga->Text = L"C";
			this->btnapaga->UseVisualStyleBackColor = true;
			this->btnapaga->Click += gcnew System::EventHandler(this, &Form1::btnapaga_Click);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(12, 140);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(55, 52);
			this->btn4->TabIndex = 1;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::btn4_Click);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(73, 140);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(55, 52);
			this->btn5->TabIndex = 1;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::btn5_Click);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(134, 140);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(55, 52);
			this->btn6->TabIndex = 1;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::btn6_Click);
			// 
			// btnmenos
			// 
			this->btnmenos->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnmenos->Location = System::Drawing::Point(195, 140);
			this->btnmenos->Name = L"btnmenos";
			this->btnmenos->Size = System::Drawing::Size(55, 52);
			this->btnmenos->TabIndex = 1;
			this->btnmenos->Text = L"-";
			this->btnmenos->UseVisualStyleBackColor = true;
			this->btnmenos->Click += gcnew System::EventHandler(this, &Form1::btnmenos_Click);
			// 
			// btnfatorial
			// 
			this->btnfatorial->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnfatorial->Location = System::Drawing::Point(256, 140);
			this->btnfatorial->Name = L"btnfatorial";
			this->btnfatorial->Size = System::Drawing::Size(55, 52);
			this->btnfatorial->TabIndex = 1;
			this->btnfatorial->Text = L"n!";
			this->btnfatorial->UseVisualStyleBackColor = true;
			this->btnfatorial->Click += gcnew System::EventHandler(this, &Form1::btnfatorial_Click);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(12, 198);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(55, 52);
			this->btn1->TabIndex = 1;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(73, 198);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(55, 52);
			this->btn2->TabIndex = 1;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(134, 198);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(55, 52);
			this->btn3->TabIndex = 1;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::btn3_Click);
			// 
			// btnx
			// 
			this->btnx->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnx->Location = System::Drawing::Point(195, 198);
			this->btnx->Name = L"btnx";
			this->btnx->Size = System::Drawing::Size(55, 52);
			this->btnx->TabIndex = 1;
			this->btnx->Text = L"×";
			this->btnx->UseVisualStyleBackColor = true;
			this->btnx->Click += gcnew System::EventHandler(this, &Form1::btnx_Click);
			// 
			// btnpotencia
			// 
			this->btnpotencia->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnpotencia->Location = System::Drawing::Point(256, 198);
			this->btnpotencia->Name = L"btnpotencia";
			this->btnpotencia->Size = System::Drawing::Size(55, 52);
			this->btnpotencia->TabIndex = 1;
			this->btnpotencia->Text = L"xʸ";
			this->btnpotencia->UseVisualStyleBackColor = true;
			this->btnpotencia->Click += gcnew System::EventHandler(this, &Form1::btnpotencia_Click);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(12, 256);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(55, 52);
			this->btn0->TabIndex = 1;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// btn
			// 
			this->btn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn->Location = System::Drawing::Point(73, 256);
			this->btn->Name = L"btn";
			this->btn->Size = System::Drawing::Size(55, 52);
			this->btn->TabIndex = 1;
			this->btn->Text = L",";
			this->btn->UseVisualStyleBackColor = true;
			this->btn->Click += gcnew System::EventHandler(this, &Form1::btn_Click);
			// 
			// btn10
			// 
			this->btn10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn10->Location = System::Drawing::Point(134, 256);
			this->btn10->Name = L"btn10";
			this->btn10->Size = System::Drawing::Size(55, 52);
			this->btn10->TabIndex = 1;
			this->btn10->Text = L"+/-";
			this->btn10->UseVisualStyleBackColor = true;
			// 
			// btndivisao
			// 
			this->btndivisao->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btndivisao->Location = System::Drawing::Point(195, 256);
			this->btndivisao->Name = L"btndivisao";
			this->btndivisao->Size = System::Drawing::Size(55, 52);
			this->btndivisao->TabIndex = 1;
			this->btndivisao->Text = L"÷";
			this->btndivisao->UseVisualStyleBackColor = true;
			this->btndivisao->Click += gcnew System::EventHandler(this, &Form1::btndivisao_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(256, 256);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(55, 52);
			this->button20->TabIndex = 1;
			this->button20->Text = L"√";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// btnigual
			// 
			this->btnigual->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnigual->Location = System::Drawing::Point(73, 316);
			this->btnigual->Name = L"btnigual";
			this->btnigual->Size = System::Drawing::Size(177, 52);
			this->btnigual->TabIndex = 2;
			this->btnigual->Text = L"=";
			this->btnigual->UseVisualStyleBackColor = true;
			this->btnigual->Click += gcnew System::EventHandler(this, &Form1::btnigual_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(320, 380);
			this->Controls->Add(this->btnigual);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->btnpotencia);
			this->Controls->Add(this->btndivisao);
			this->Controls->Add(this->btnfatorial);
			this->Controls->Add(this->btnx);
			this->Controls->Add(this->btnapaga);
			this->Controls->Add(this->btn10);
			this->Controls->Add(this->btnmenos);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->btn);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btnmais);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->lbldisplay);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Calculadora";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
		bool separado;
		double num, num2;
		char op;
		void limpa(){
			separado=false;
			lbldisplay->Text = "0";
		}
		void limpatudo(){
			limpa();
			num = 0.0;
			op = '\0';
		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 separado=false;
						
			 }
	private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
			if(lbldisplay->Text->Length < MAXCHAR)
			{
				 if(lbldisplay->Text == "0")
					 lbldisplay->Text = "1";
				 else
				 lbldisplay->Text = lbldisplay->Text + "1";	
			}
			 }
private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
			if(lbldisplay->Text->Length < MAXCHAR)
			{
				 if(lbldisplay->Text == "0")
					 lbldisplay->Text = "2";
				 else
				 lbldisplay->Text = lbldisplay->Text + "2";	
			}
			 }
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
			if(lbldisplay->Text->Length < MAXCHAR)
			{
				 if(lbldisplay->Text == "0")
					 lbldisplay->Text = "3";
				 else
				 lbldisplay->Text = lbldisplay->Text + "3";	
			}
			 }
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lbldisplay->Text->Length < MAXCHAR)
			{
				 if(lbldisplay->Text == "0")
					 lbldisplay->Text = "4";
				 else
				 lbldisplay->Text = lbldisplay->Text + "4";	
			}
			 }
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
			if(lbldisplay->Text->Length < MAXCHAR)
			{
				 if(lbldisplay->Text == "0")
					 lbldisplay->Text = "5";
				 else
				 lbldisplay->Text = lbldisplay->Text + "5";	
			}
			 }
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
			if(lbldisplay->Text->Length < MAXCHAR)
			{
				 if(lbldisplay->Text == "0")
					 lbldisplay->Text = "6";
				 else
				 lbldisplay->Text = lbldisplay->Text + "6";	
			}
			 }
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
			if(lbldisplay->Text->Length < MAXCHAR)
			{
				 if(lbldisplay->Text == "0")
					 lbldisplay->Text = "7";
				 else
				 lbldisplay->Text = lbldisplay->Text + "7";	
			}
			 }
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
			if(lbldisplay->Text->Length < MAXCHAR)
			{
				 if(lbldisplay->Text == "0")
					 lbldisplay->Text = "8";
				 else
				 lbldisplay->Text = lbldisplay->Text + "8";	
			}
			 }
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
			if(lbldisplay->Text->Length < MAXCHAR)
			{
				 if(lbldisplay->Text == "0")
					 lbldisplay->Text = "9";
				 else
				 lbldisplay->Text = lbldisplay->Text + "9";	
			}
			 }
private: System::Void btn0_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lbldisplay->Text->Length < MAXCHAR)
			{
				 if(lbldisplay->Text != "0")
					lbldisplay->Text = lbldisplay->Text + "0";	
			
			 }
		 }
private: System::Void btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 if(lbldisplay->Text->Length < MAXCHAR &&!separado)
			{
				 lbldisplay->Text = lbldisplay->Text + ",";
				 separado = true;
			}

		 }
private: System::Void btnmais_Click(System::Object^  sender, System::EventArgs^  e) {
			 num = System::Convert::ToDouble(lbldisplay->Text);
			 op = '+';
			 limpa();
		 }
private: System::Void btnmenos_Click(System::Object^  sender, System::EventArgs^  e) {
			 num = System::Convert::ToDouble(lbldisplay->Text);
			 op = '-';
			 limpa();
		 }
private: System::Void btnx_Click(System::Object^  sender, System::EventArgs^  e) {
			 num = System::Convert::ToDouble(lbldisplay->Text);
			 op = '*';
			 limpa();
		 }
private: System::Void btndivisao_Click(System::Object^  sender, System::EventArgs^  e) {
			 num = System::Convert::ToDouble(lbldisplay->Text);
			 op = '/';
			 limpa();
		 }
private: System::Void btnigual_Click(System::Object^  sender, System::EventArgs^  e) {
			 double num2=System::Convert::ToDouble(lbldisplay->Text);
			 switch(op){
			 case '+':
				 lbldisplay->Text=System::Convert::ToString(num+num2);
				 break;
			 case '-':
				 lbldisplay->Text=System::Convert::ToString(num-num2);
				 break;
			 case '*':
				 lbldisplay->Text=System::Convert::ToString(num*num2);
				 break;
			 case '/':
				 lbldisplay->Text=System::Convert::ToString(num/num2);
				 break;
			 }
							 
		 }
private: System::Void btnfatorial_Click(System::Object^  sender, System::EventArgs^  e) {
			 num = System::Convert::ToDouble(lbldisplay->Text);
			 int i, fat=1;
			 for(i=1;i<=num;i++)
				 fat=fat*i;
			 lbldisplay->Text=System::Convert::ToString(fat);

		 }
private: System::Void btnapaga_Click(System::Object^  sender, System::EventArgs^  e) {
			 limpatudo();
		 }
private: System::Void btnpotencia_Click(System::Object^  sender, System::EventArgs^  e) {
			  num = System::Convert::ToDouble(lbldisplay->Text);
			 op = 'x';
			 p = pow (x, y)
			 limpa();

		 }
};
}

