#pragma once

namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyDialog
	/// </summary>
	public ref class MyDialog : public System::Windows::Forms::Form
	{
	public:
		MyDialog(void)
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
		~MyDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BtnOK;
	protected:
	private: System::Windows::Forms::Button^ BtnCancel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbAvt;
	private: System::Windows::Forms::TextBox^ tbTime;





	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ cbJanr;


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
			this->BtnOK = (gcnew System::Windows::Forms::Button());
			this->BtnCancel = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbAvt = (gcnew System::Windows::Forms::TextBox());
			this->tbTime = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cbJanr = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// BtnOK
			// 
			this->BtnOK->Location = System::Drawing::Point(810, 161);
			this->BtnOK->Name = L"BtnOK";
			this->BtnOK->Size = System::Drawing::Size(75, 35);
			this->BtnOK->TabIndex = 0;
			this->BtnOK->Text = L"ок";
			this->BtnOK->UseVisualStyleBackColor = true;
			this->BtnOK->Click += gcnew System::EventHandler(this, &MyDialog::BtnOK_Click);
			// 
			// BtnCancel
			// 
			this->BtnCancel->Location = System::Drawing::Point(902, 161);
			this->BtnCancel->Name = L"BtnCancel";
			this->BtnCancel->Size = System::Drawing::Size(75, 35);
			this->BtnCancel->TabIndex = 1;
			this->BtnCancel->Text = L"cancel";
			this->BtnCancel->UseVisualStyleBackColor = true;
			this->BtnCancel->Click += gcnew System::EventHandler(this, &MyDialog::BtnCancel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.0979F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(20, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(247, 32);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Введите данные";
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(26, 120);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(303, 26);
			this->tbName->TabIndex = 3;
			// 
			// tbAvt
			// 
			this->tbAvt->Location = System::Drawing::Point(335, 120);
			this->tbAvt->Name = L"tbAvt";
			this->tbAvt->Size = System::Drawing::Size(241, 26);
			this->tbAvt->TabIndex = 4;
			// 
			// tbTime
			// 
			this->tbTime->Location = System::Drawing::Point(810, 120);
			this->tbTime->Name = L"tbTime";
			this->tbTime->Size = System::Drawing::Size(166, 26);
			this->tbTime->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(177, 20);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Название композиции";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(331, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 20);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Исполнитель";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(578, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Жанр";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(805, 87);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(170, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Продолжительность";
			this->label5->Click += gcnew System::EventHandler(this, &MyDialog::label5_Click);
			// 
			// cbJanr
			// 
			this->cbJanr->FormattingEnabled = true;
			this->cbJanr->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Классическая музыка", L"Рок", L"Поп", L"Джаз", L"Рэп",
					L"Шансон", L"Да"
			});
			this->cbJanr->Location = System::Drawing::Point(583, 119);
			this->cbJanr->Name = L"cbJanr";
			this->cbJanr->Size = System::Drawing::Size(221, 28);
			this->cbJanr->TabIndex = 11;
			// 
			// MyDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(995, 224);
			this->Controls->Add(this->cbJanr);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbTime);
			this->Controls->Add(this->tbAvt);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BtnCancel);
			this->Controls->Add(this->BtnOK);
			this->Name = L"MyDialog";
			this->Text = L"MyDialog";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: String^ getName()
	{
		return(Convert::ToString(tbName->Text));
	}
	public: int getTime()
	{
		try
		{
			return(Convert::ToInt32(tbTime->Text));
		}
		catch (...)
		{
			return(0);
		}
	}
	public: String^ getAvt()
	{
		return(Convert::ToString(tbAvt->Text));
	}
	public: String^ getJanr()
	{
		return(Convert::ToString(cbJanr->SelectedItem));
	}
	public: void setName(String^ fio)
	{
		tbName->Text = fio;
	}
	public: void setAvt(String^ avt)
	{
		tbAvt->Text = avt;
	}
	public: void setTime(String^ time)
	{
		tbTime->Text = time;
	}
	public: void setJanr(String^ Jnr)
	{
		cbJanr->SelectedItem = Jnr;
	}
	private: System::Void lbJanr_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void BtnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void BtnOK_Click(System::Object^ sender, System::EventArgs^ e) {
	DialogResult = Windows::Forms::DialogResult::OK;
	//this->Close();
}
};
}
