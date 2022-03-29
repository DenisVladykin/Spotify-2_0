#pragma once

namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьКакToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ ofdopen;
	private: System::Windows::Forms::SaveFileDialog^ sfdsave;
	private: System::Windows::Forms::DataGridView^ dgv;






	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ searchtime;

	private: System::Windows::Forms::RadioButton^ searchavtor;

	private: System::Windows::Forms::RadioButton^ searchtype;



	private: System::Windows::Forms::Button^ search;
	private: System::Windows::Forms::TextBox^ searchin;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckedListBox^ num;








	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nazv;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ autor;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ type;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ time;


	private: System::Windows::Forms::Button^ Vstavka;

































		   





	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьКакToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ofdopen = (gcnew System::Windows::Forms::OpenFileDialog());
			this->sfdsave = (gcnew System::Windows::Forms::SaveFileDialog());
			this->dgv = (gcnew System::Windows::Forms::DataGridView());
			this->nazv = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->autor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->type = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->searchtime = (gcnew System::Windows::Forms::RadioButton());
			this->searchavtor = (gcnew System::Windows::Forms::RadioButton());
			this->searchtype = (gcnew System::Windows::Forms::RadioButton());
			this->search = (gcnew System::Windows::Forms::Button());
			this->searchin = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->num = (gcnew System::Windows::Forms::CheckedListBox());
			this->Vstavka = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->файлToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1761, 36);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->открытьToolStripMenuItem,
					this->сохранитьToolStripMenuItem, this->сохранитьКакToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(69, 30);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(268, 32);
			this->открытьToolStripMenuItem->Text = L"Открыть";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::открытьToolStripMenuItem_Click);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(268, 32);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьToolStripMenuItem_Click);
			// 
			// сохранитьКакToolStripMenuItem
			// 
			this->сохранитьКакToolStripMenuItem->Name = L"сохранитьКакToolStripMenuItem";
			this->сохранитьКакToolStripMenuItem->Size = System::Drawing::Size(268, 32);
			this->сохранитьКакToolStripMenuItem->Text = L"Сохранить как";
			this->сохранитьКакToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьКакToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(268, 32);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// ofdopen
			// 
			this->ofdopen->FileName = L"ofdopen";
			// 
			// dgv
			// 
			this->dgv->AllowUserToResizeColumns = false;
			this->dgv->BackgroundColor = System::Drawing::SystemColors::ScrollBar;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.055943F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->nazv, this->autor,
					this->type, this->time
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.055943F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgv->DefaultCellStyle = dataGridViewCellStyle2;
			this->dgv->Dock = System::Windows::Forms::DockStyle::Left;
			this->dgv->GridColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dgv->Location = System::Drawing::Point(0, 36);
			this->dgv->Name = L"dgv";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.055943F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dgv->RowHeadersWidth = 50;
			this->dgv->RowTemplate->Height = 28;
			this->dgv->Size = System::Drawing::Size(1136, 383);
			this->dgv->TabIndex = 1;
			this->dgv->RowsAdded += gcnew System::Windows::Forms::DataGridViewRowsAddedEventHandler(this, &MyForm::dgv_RowsAdded);
			this->dgv->RowsRemoved += gcnew System::Windows::Forms::DataGridViewRowsRemovedEventHandler(this, &MyForm::dgv_RowsRemoved);
			this->dgv->Sorted += gcnew System::EventHandler(this, &MyForm::dgv_Sorted);
			// 
			// nazv
			// 
			this->nazv->HeaderText = L"Название композиции";
			this->nazv->MinimumWidth = 7;
			this->nazv->Name = L"nazv";
			this->nazv->Width = 200;
			// 
			// autor
			// 
			this->autor->HeaderText = L"Исполнитель";
			this->autor->MinimumWidth = 7;
			this->autor->Name = L"autor";
			this->autor->Width = 200;
			// 
			// type
			// 
			this->type->HeaderText = L"Жанр";
			this->type->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Классическая музыка", L"Рок", L"Поп", L"Джаз", L"Рэп",
					L"Шансон", L"Да"
			});
			this->type->MinimumWidth = 7;
			this->type->Name = L"type";
			this->type->Width = 149;
			// 
			// time
			// 
			this->time->HeaderText = L"Продолжительность";
			this->time->MinimumWidth = 7;
			this->time->Name = L"time";
			this->time->Width = 150;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->groupBox1->Controls->Add(this->searchtime);
			this->groupBox1->Controls->Add(this->searchavtor);
			this->groupBox1->Controls->Add(this->searchtype);
			this->groupBox1->Location = System::Drawing::Point(1142, 36);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(206, 105);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// searchtime
			// 
			this->searchtime->AutoSize = true;
			this->searchtime->Location = System::Drawing::Point(6, 72);
			this->searchtime->Name = L"searchtime";
			this->searchtime->Size = System::Drawing::Size(191, 24);
			this->searchtime->TabIndex = 5;
			this->searchtime->TabStop = true;
			this->searchtime->Text = L"Продолжительность";
			this->searchtime->UseVisualStyleBackColor = true;
			// 
			// searchavtor
			// 
			this->searchavtor->AutoSize = true;
			this->searchavtor->Location = System::Drawing::Point(6, 42);
			this->searchavtor->Name = L"searchavtor";
			this->searchavtor->Size = System::Drawing::Size(132, 24);
			this->searchavtor->TabIndex = 4;
			this->searchavtor->TabStop = true;
			this->searchavtor->Text = L"Исполнитель";
			this->searchavtor->UseVisualStyleBackColor = true;
			// 
			// searchtype
			// 
			this->searchtype->AutoSize = true;
			this->searchtype->Location = System::Drawing::Point(6, 12);
			this->searchtype->Name = L"searchtype";
			this->searchtype->Size = System::Drawing::Size(70, 24);
			this->searchtype->TabIndex = 3;
			this->searchtype->TabStop = true;
			this->searchtype->Text = L"Жанр";
			this->searchtype->UseVisualStyleBackColor = true;
			// 
			// search
			// 
			this->search->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search.Image")));
			this->search->Location = System::Drawing::Point(1699, 91);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(55, 55);
			this->search->TabIndex = 4;
			this->search->UseVisualStyleBackColor = true;
			this->search->Click += gcnew System::EventHandler(this, &MyForm::search_Click);
			// 
			// searchin
			// 
			this->searchin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.11189F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->searchin->Location = System::Drawing::Point(1354, 94);
			this->searchin->Name = L"searchin";
			this->searchin->Size = System::Drawing::Size(339, 44);
			this->searchin->TabIndex = 5;
			this->searchin->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.11189F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(1354, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 38);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Поиск";
			// 
			// num
			// 
			this->num->FormattingEnabled = true;
			this->num->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"1" });
			this->num->Location = System::Drawing::Point(1142, 147);
			this->num->Name = L"num";
			this->num->Size = System::Drawing::Size(76, 88);
			this->num->TabIndex = 7;
			// 
			// Vstavka
			// 
			this->Vstavka->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Vstavka.Image")));
			this->Vstavka->Location = System::Drawing::Point(1225, 166);
			this->Vstavka->Name = L"Vstavka";
			this->Vstavka->Size = System::Drawing::Size(55, 55);
			this->Vstavka->TabIndex = 13;
			this->Vstavka->UseVisualStyleBackColor = true;
			this->Vstavka->Click += gcnew System::EventHandler(this, &MyForm::Vstavka_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1761, 419);
			this->Controls->Add(this->Vstavka);
			this->Controls->Add(this->num);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->searchin);
			this->Controls->Add(this->search);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dgv);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ tekfile;

	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void открытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (ofdopen->ShowDialog() == Windows::Forms::DialogResult::OK) //ОК - если закрыто окно через "открыть"(файл). Если иное - CANCEL.  
	{
		tekfile = Convert::ToString(ofdopen->FileName);

		try
		{
			StreamReader^ sw = File::OpenText(tekfile);
			String^ tekstr;
			bool er = false;
			int z;
			if ((tekstr = sw->ReadLine()) != nullptr)
			{
				try
				{
					z = Convert::ToInt32(tekstr);
				}
				catch(...)
				{
					MessageBox::Show("Нарушена кодировка файла.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					er = true;
				}
			}
			if (!er)
			{
				dgv->Rows->Clear();
				for (int i = 0; i < z - 1; i++)
				{
					dgv->RowCount++;
				}
				for (int t = 0; t < z; t++)
				{
					for (int y = 0; y < 4; y++)
					{
						if ((tekstr = sw->ReadLine()) != nullptr)
						{
							dgv[y, t]->Value = Convert::ToString(tekstr);
						}
						else
							break;
					}
				}
			}
		}
		catch (...)
		{
			MessageBox::Show("Возникли проблемы при открытии файла.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}

private: System::Void сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		StreamWriter^ sw = gcnew StreamWriter(tekfile);
		sw->WriteLine(Convert::ToString(dgv->RowCount));
		for (int i = 0; i < Convert::ToInt32(dgv->RowCount); i++)
		{
			for (int j = 0; j < 4; j++)
			{
				sw->WriteLine(Convert::ToString(dgv[j, i]->Value));
			}
		}
		sw->Close();
	}
	catch (...)
	{
		MessageBox::Show("Попробуйте позже.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void сохранитьКакToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (sfdsave->ShowDialog() == Windows::Forms::DialogResult::OK) //ОК - если закрыто окно через "открыть"(файл). Если иное - CANCEL.  
	{
		String^ failik = sfdsave->FileName;
		tekfile = failik;
		StreamWriter^ sw = gcnew StreamWriter(failik);
		sw->WriteLine(Convert::ToString(dgv->RowCount));
		for (int i = 0; i < Convert::ToInt32(dgv->RowCount); i++)
		{
			for (int j = 0; j < 4; j++)
			{
				sw->WriteLine(Convert::ToString(dgv[j, i]->Value));
			}
		}
		sw->Close();
	}
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void search_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Convert::ToString(searchin->Text) != "")
	{
		if (searchtype->Checked)
		{
			String^ A = Convert::ToString(searchin->Text);
			A = A->ToLower();
			String^ pesenki;

			for (int i = 0; i < Convert::ToInt32(dgv->RowCount); i++)
			{
				String^ B = Convert::ToString(dgv[2, i]->Value);
				B = B->ToLower();
				if (A == B)
				{
					pesenki += Convert::ToString(dgv[0, i]->Value);
					pesenki += " ";
					pesenki += Convert::ToString(dgv[1, i]->Value);
					pesenki += " ";
					pesenki += Convert::ToString(dgv[2, i]->Value);
					pesenki += " ";
					pesenki += Convert::ToString(dgv[3, i]->Value);
					pesenki += "\n";
				}
			}
			MessageBox::Show(pesenki);
		}
		else
		{
			if (searchtime->Checked)
			{
				String^ A = Convert::ToString(searchin->Text);
				String^ pesenki;

				for (int i = 0; i < Convert::ToInt32(dgv->RowCount); i++)
				{
					String^ B = Convert::ToString(dgv[3, i]->Value);
					if (String::Compare(A, B)<0)
					{
						pesenki += Convert::ToString(dgv[0, i]->Value);
						pesenki += " ";
						pesenki += Convert::ToString(dgv[1, i]->Value);
						pesenki += " ";
						pesenki += Convert::ToString(dgv[2, i]->Value);
						pesenki += " ";
						pesenki += Convert::ToString(dgv[3, i]->Value);
						pesenki += "\n";
					}
				}
				MessageBox::Show(pesenki);
			}
			else
			{
				if (searchavtor->Checked)
				{
					String^ A = Convert::ToString(searchin->Text);
					A = A->ToLower();
					String^ pesenki;
					
					for (int i = 0; i < Convert::ToInt32(dgv->RowCount); i++)
					{
						String^ B = Convert::ToString(dgv[1, i]->Value);
						B = B->ToLower();
						if (A == B)
						{
							pesenki += Convert::ToString(dgv[0, i]->Value);
							pesenki += " ";
							pesenki += Convert::ToString(dgv[1, i]->Value);
							pesenki += " ";
							pesenki += Convert::ToString(dgv[2, i]->Value);
							pesenki += " ";
							pesenki += Convert::ToString(dgv[3, i]->Value);
							pesenki += "\n";
						}
					}
					MessageBox::Show(pesenki);
				}
				else
				{
					MessageBox::Show(Convert::ToString("Не выбран параметр поиска."), "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
	}
	else
	{
		MessageBox::Show(Convert::ToString("Не введён текст."), "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}



private: System::Void dgv_RowsAdded(System::Object^ sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^ e) {
	for (int i = 0; i < Convert::ToInt32(dgv->RowCount); i++)
	{
		dgv->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
	}
	num->Items->Add(Convert::ToString(dgv->RowCount));
}

private: System::Void dgv_RowsRemoved(System::Object^ sender, System::Windows::Forms::DataGridViewRowsRemovedEventArgs^ e) {
	for (int i = 0; i < Convert::ToInt32(dgv->RowCount); i++)
	{
		dgv->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
	}
	num->Items->RemoveAt(Convert::ToInt32(dgv->RowCount));
}

private: System::Void Vstavka_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Convert::ToInt32(num->CheckedItems->Count) != 0)
	{
		for (int i = 0; i < Convert::ToInt32(dgv->RowCount); i++)
		{
			if (num->GetItemChecked(i))
			{
				dgv->Rows->Insert(i, 1);
			}
		}
	}
	else
	{
		MessageBox::Show(Convert::ToString("Не выбран номер."), "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void Sort_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dgv_Sorted(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < Convert::ToInt32(dgv->RowCount); i++)
	{
		dgv->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
	}
}
};
}


/*Чтобы пользоваться старойым типом работы с файлом
* #include <fstring>
* 
* using namespace System::Runtime::InteropServices; - в общих настройках
* 
* char* fname = (char*)(void*)Marshal::StringToGGlobalAnsil(ofdopen->FileName) - преобразование из string^ в char*
* std::ifstream in(fname);
* if(!in)
*	MessageBox::Show("Ошибка открытого файла " + ofdopen->FileName);
* else
* {
*	Читаем файл
*	in.close();
* }
* Не забыть очистить место из под fname памяти - Marshal::FreeGlobal((IntPtr)fname);
* 
* String^s = Marshal::PtrToStringAnsi((IntPtr)fname); - из char* в string^
* 
* 
* Либо изучить работу с файлами в C++/CLI
* 
* ДЛЯ ПРИКРЕПЛЕНИЯ КРАЯ ТАБЛИЦЫ К КРАЮ ПРИЛОЖЕНИЯ - ФУНКЦИЯ dock
* 
* дата гридвью комбобокс - выбрать в настройках столбца чтобы листбокс был вместо строчек
*/
