#pragma once

namespace projGUI1 {

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
	private: System::Windows::Forms::Label^  lbl_msg;
	private: System::Windows::Forms::Button^  btn_OK;
	private: System::Windows::Forms::TextBox^  txt_msg;

	protected: 

	protected: 


	private: System::Windows::Forms::CheckBox^  chb_opcao;
	private: System::Windows::Forms::RadioButton^  opc1;




	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  grp_Escolha;
	private: System::Windows::Forms::RadioButton^  opc3;


	private: System::Windows::Forms::RadioButton^  opc2;

	private: System::Windows::Forms::ComboBox^  cmb_filhotes;

	private: System::Windows::Forms::CheckBox^  chb_opcao2;


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
			this->lbl_msg = (gcnew System::Windows::Forms::Label());
			this->btn_OK = (gcnew System::Windows::Forms::Button());
			this->txt_msg = (gcnew System::Windows::Forms::TextBox());
			this->chb_opcao = (gcnew System::Windows::Forms::CheckBox());
			this->opc1 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->grp_Escolha = (gcnew System::Windows::Forms::GroupBox());
			this->opc3 = (gcnew System::Windows::Forms::RadioButton());
			this->opc2 = (gcnew System::Windows::Forms::RadioButton());
			this->cmb_filhotes = (gcnew System::Windows::Forms::ComboBox());
			this->chb_opcao2 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->grp_Escolha->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_msg
			// 
			this->lbl_msg->Location = System::Drawing::Point(177, 180);
			this->lbl_msg->Name = L"lbl_msg";
			this->lbl_msg->Size = System::Drawing::Size(269, 185);
			this->lbl_msg->TabIndex = 0;
			this->lbl_msg->Text = L"Mensagem";
			this->lbl_msg->Click += gcnew System::EventHandler(this, &Form1::lbl_msg_Click);
			// 
			// btn_OK
			// 
			this->btn_OK->Location = System::Drawing::Point(29, 207);
			this->btn_OK->Name = L"btn_OK";
			this->btn_OK->Size = System::Drawing::Size(75, 23);
			this->btn_OK->TabIndex = 1;
			this->btn_OK->Text = L"Vai planeta!";
			this->btn_OK->UseVisualStyleBackColor = true;
			this->btn_OK->Click += gcnew System::EventHandler(this, &Form1::btn_OK_Click);
			// 
			// txt_msg
			// 
			this->txt_msg->Location = System::Drawing::Point(29, 12);
			this->txt_msg->Name = L"txt_msg";
			this->txt_msg->Size = System::Drawing::Size(100, 20);
			this->txt_msg->TabIndex = 2;
			this->txt_msg->TextChanged += gcnew System::EventHandler(this, &Form1::txt_mensagem_TextChanged);
			// 
			// chb_opcao
			// 
			this->chb_opcao->AutoSize = true;
			this->chb_opcao->Location = System::Drawing::Point(29, 38);
			this->chb_opcao->Name = L"chb_opcao";
			this->chb_opcao->Size = System::Drawing::Size(54, 17);
			this->chb_opcao->TabIndex = 3;
			this->chb_opcao->Text = L"Nome";
			this->chb_opcao->UseVisualStyleBackColor = true;
			this->chb_opcao->CheckedChanged += gcnew System::EventHandler(this, &Form1::chb_opcao_CheckedChanged);
			// 
			// opc1
			// 
			this->opc1->AutoSize = true;
			this->opc1->Location = System::Drawing::Point(13, 19);
			this->opc1->Name = L"opc1";
			this->opc1->Size = System::Drawing::Size(80, 17);
			this->opc1->TabIndex = 5;
			this->opc1->Text = L"Opção Azul";
			this->opc1->UseVisualStyleBackColor = true;
			this->opc1->CheckedChanged += gcnew System::EventHandler(this, &Form1::opc1_CheckedChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(177, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(269, 138);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// grp_Escolha
			// 
			this->grp_Escolha->Controls->Add(this->opc3);
			this->grp_Escolha->Controls->Add(this->opc2);
			this->grp_Escolha->Controls->Add(this->opc1);
			this->grp_Escolha->Location = System::Drawing::Point(29, 84);
			this->grp_Escolha->Name = L"grp_Escolha";
			this->grp_Escolha->Size = System::Drawing::Size(142, 90);
			this->grp_Escolha->TabIndex = 7;
			this->grp_Escolha->TabStop = false;
			this->grp_Escolha->Text = L"Tipo";
			// 
			// opc3
			// 
			this->opc3->AutoSize = true;
			this->opc3->Location = System::Drawing::Point(13, 69);
			this->opc3->Name = L"opc3";
			this->opc3->Size = System::Drawing::Size(104, 17);
			this->opc3->TabIndex = 7;
			this->opc3->Text = L"Opção Vermelha";
			this->opc3->UseVisualStyleBackColor = true;
			// 
			// opc2
			// 
			this->opc2->AutoSize = true;
			this->opc2->Location = System::Drawing::Point(13, 45);
			this->opc2->Name = L"opc2";
			this->opc2->Size = System::Drawing::Size(88, 17);
			this->opc2->TabIndex = 6;
			this->opc2->Text = L"Opção Verde";
			this->opc2->UseVisualStyleBackColor = true;
			this->opc2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// cmb_filhotes
			// 
			this->cmb_filhotes->FormattingEnabled = true;
			this->cmb_filhotes->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Item 1", L"Item 2", L"Item 3", L"Item 4"});
			this->cmb_filhotes->Location = System::Drawing::Point(29, 180);
			this->cmb_filhotes->Name = L"cmb_filhotes";
			this->cmb_filhotes->Size = System::Drawing::Size(121, 21);
			this->cmb_filhotes->TabIndex = 8;
			this->cmb_filhotes->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::cmb_filhotes_SelectedIndexChanged);
			// 
			// chb_opcao2
			// 
			this->chb_opcao2->AutoSize = true;
			this->chb_opcao2->Location = System::Drawing::Point(29, 61);
			this->chb_opcao2->Name = L"chb_opcao2";
			this->chb_opcao2->Size = System::Drawing::Size(53, 17);
			this->chb_opcao2->TabIndex = 9;
			this->chb_opcao2->Text = L"Idade";
			this->chb_opcao2->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(458, 374);
			this->Controls->Add(this->chb_opcao2);
			this->Controls->Add(this->cmb_filhotes);
			this->Controls->Add(this->grp_Escolha);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->chb_opcao);
			this->Controls->Add(this->txt_msg);
			this->Controls->Add(this->btn_OK);
			this->Controls->Add(this->lbl_msg);
			this->Name = L"Form1";
			this->Text = L"Meu primeiro";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->grp_Escolha->ResumeLayout(false);
			this->grp_Escolha->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void lbl_msg_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void chb_opcao_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void txt_mensagem_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btn_OK_Click(System::Object^  sender, System::EventArgs^  e) {

			 lbl_msg->Text = "";
			 
			 if(chb_opcao->Checked)
			 {
				 lbl_msg->Text = lbl_msg->Text + "Capitão Planeta";
			 }
			 if(chb_opcao2->Checked)
				 lbl_msg->Text = lbl_msg->Text +"2 Meses";
			 lbl_msg->Text = lbl_msg->Text + "Aneis: " + 
				 System::Convert::ToString(cmb_filhotes->SelectedItem) + ", ";
			 if(opc1->Checked)
				 lbl_msg->ForeColor = System::Drawing::Color::Blue;
			 if(opc2->Checked)
				 lbl_msg->ForeColor = System::Drawing::Color::Green;
			 if(opc3->Checked)
				 lbl_msg->ForeColor = System::Drawing::Color::Red;
			 lbl_msg->Text =lbl_msg->Text + txt_msg->Text;
			 
		 }
private: System::Void radioBuckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void cmb_filhotes_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void opc1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

