#pragma once

namespace Airlines{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для request
	/// </summary>
	public ref class request : public System::Windows::Forms::Form
	{
	public:
		request(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		request(String ^name)
		{
			InitializeComponent();

			nameOfFile = name;

			StreamReader ^tempFile = gcnew StreamReader(nameOfFile);

			while (tempFile->Peek() >= 0) {
				array <String^>^ cells = (tempFile->ReadLine())->Split(' ', '\0');
				if (cells[0]->CompareTo(""))
					dataGridView1->Rows->Add(cells);
			}

			tempFile->Close();
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	public:
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox2;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  NumberOfRaice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Sourse;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  destination;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TimeIn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TimeOut;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  type;

		String ^nameOfFile;

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~request()
		{
			if (components)
			{
				delete components;
			}
		}


	private: Int32 Changing_NumberOfRace() {
		if (checkBox1->Checked)
		if (!(textBox1->Text->CompareTo(""))) {
			if (!Error->Text->CompareTo(""))
				Error->Text = "Поле \"Номер рейса\" не может быть пустым!";
			return 0;
		}
		else {
			Error->Text = "";
			return 1;
		}
		return 1;
	}
	private: Int32 Changing_Source() {
		if (checkBox2->Checked)
		if (!((textBox2->Text)->CompareTo(""))) {
			if (!Error->Text->CompareTo(""))
				Error->Text = "В поле \"Пункт отправления\" пункт не указан!";
			return 0;
		}
		else {
			Error->Text = "";
			return 1;
		}
		return 1;
	}
	private: Int32 Changing_Destination() {
		if (checkBox3->Checked)
		if (!((textBox3->Text)->CompareTo(""))) {
			if (!Error->Text->CompareTo(""))
				Error->Text = "В поле \"Пункт прибытия\" пункт не указан!";
			return 0;
		}
		else {
			Error->Text = "";
			return 1;
		}
		return 1;
	}
	private: Int32 Changing_TimeIn() {
		if (checkBox4->Checked)
		if (!(maskedTextBox1->Text->CompareTo(""))) {
			if (!Error->Text->CompareTo(""))
				Error->Text = "Время отпрвления введено неверно";
			return 0;
		}
		else {
			Error->Text = "";
			return 1;
		}
		return 1;
	}
	private: Int32 Changing_TimeOut() {
		if (checkBox5->Checked)
		if (!(maskedTextBox2->Text->CompareTo(""))) {
			if (!Error->Text->CompareTo(""))
				Error->Text = "Время прибытия введено неверно";
			return 0;
		}
		else {
			Error->Text = "";
			return 1;
		}
		return 1;
	}
	private: Int32 Changing_Type() {
		if (checkBox6->Checked)
		if (!((comboBox1->Text)->CompareTo(""))) {
			if (!Error->Text->CompareTo(""))
				Error->Text = "В поле \"Класс\" класс не выбран!";
			return 0;
		}
		else {
			Error->Text = "";
			return 1;
		}
		return 1;
	}

	protected:

	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::Button^  CreateRequest;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  Error;


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
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->CreateRequest = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Error = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->NumberOfRaice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sourse = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->destination = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TimeIn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TimeOut = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(77, 72);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &request::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(173, 73);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 6;
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &request::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(278, 72);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(15, 14);
			this->checkBox3->TabIndex = 6;
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &request::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(364, 73);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(15, 14);
			this->checkBox4->TabIndex = 6;
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &request::checkBox4_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(424, 73);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(15, 14);
			this->checkBox5->TabIndex = 6;
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &request::checkBox5_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(506, 72);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(15, 14);
			this->checkBox6->TabIndex = 6;
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &request::checkBox6_CheckedChanged);
			// 
			// CreateRequest
			// 
			this->CreateRequest->Location = System::Drawing::Point(581, 12);
			this->CreateRequest->Name = L"CreateRequest";
			this->CreateRequest->Size = System::Drawing::Size(81, 27);
			this->CreateRequest->TabIndex = 7;
			this->CreateRequest->Text = L"Выполнить";
			this->CreateRequest->UseVisualStyleBackColor = true;
			this->CreateRequest->Click += gcnew System::EventHandler(this, &request::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(581, 56);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 27);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Сбросить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &request::button2_Click);
			// 
			// Error
			// 
			this->Error->AutoSize = true;
			this->Error->ForeColor = System::Drawing::Color::Red;
			this->Error->Location = System::Drawing::Point(22, 87);
			this->Error->Name = L"Error";
			this->Error->Size = System::Drawing::Size(0, 13);
			this->Error->TabIndex = 9;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Enabled = false;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Бизнес", L"Первый", L"Эконом" });
			this->comboBox1->Location = System::Drawing::Point(468, 46);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(80, 21);
			this->comboBox1->TabIndex = 49;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Enabled = false;
			this->maskedTextBox2->Location = System::Drawing::Point(415, 46);
			this->maskedTextBox2->Mask = L"00:00";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(34, 20);
			this->maskedTextBox2->TabIndex = 47;
			this->maskedTextBox2->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Enabled = false;
			this->maskedTextBox1->Location = System::Drawing::Point(354, 46);
			this->maskedTextBox1->Mask = L"00:00";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(34, 20);
			this->maskedTextBox1->TabIndex = 48;
			this->maskedTextBox1->ValidatingType = System::DateTime::typeid;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(489, 18);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 13);
			this->label6->TabIndex = 41;
			this->label6->Text = L"Класс";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(412, 10);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 26);
			this->label7->TabIndex = 42;
			this->label7->Text = L"Время \r\nприбытия";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(337, 10);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 26);
			this->label4->TabIndex = 43;
			this->label4->Text = L"Время \r\nотправления\r\n";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(231, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 13);
			this->label3->TabIndex = 44;
			this->label3->Text = L"Пункт прибытия";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(125, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 13);
			this->label2->TabIndex = 45;
			this->label2->Text = L"Пункт отправления";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(48, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 46;
			this->label1->Text = L"Номер рейса";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(234, 46);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 38;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(128, 46);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 39;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(51, 46);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(71, 20);
			this->textBox1->TabIndex = 40;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->NumberOfRaice,
					this->Sourse, this->destination, this->TimeIn, this->TimeOut, this->type
			});
			this->dataGridView1->Location = System::Drawing::Point(17, 103);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(645, 366);
			this->dataGridView1->TabIndex = 50;
			// 
			// NumberOfRaice
			// 
			this->NumberOfRaice->HeaderText = L"Номер рейса";
			this->NumberOfRaice->MaxInputLength = 7;
			this->NumberOfRaice->Name = L"NumberOfRaice";
			this->NumberOfRaice->ReadOnly = true;
			// 
			// Sourse
			// 
			this->Sourse->HeaderText = L"Пункт отправления";
			this->Sourse->Name = L"Sourse";
			this->Sourse->ReadOnly = true;
			// 
			// destination
			// 
			this->destination->HeaderText = L"Пункт назначения";
			this->destination->Name = L"destination";
			this->destination->ReadOnly = true;
			// 
			// TimeIn
			// 
			this->TimeIn->HeaderText = L"Отправление";
			this->TimeIn->Name = L"TimeIn";
			this->TimeIn->ReadOnly = true;
			// 
			// TimeOut
			// 
			this->TimeOut->HeaderText = L"Прибытие";
			this->TimeOut->Name = L"TimeOut";
			this->TimeOut->ReadOnly = true;
			// 
			// type
			// 
			this->type->HeaderText = L"Класс";
			this->type->Name = L"type";
			this->type->ReadOnly = true;
			// 
			// request
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(683, 492);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Error);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->CreateRequest);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Name = L"request";
			this->Text = L"Поиск";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Enabled = checkBox1->Checked;
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		textBox2->Enabled = checkBox2->Checked;
	}
	private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		textBox3->Enabled = checkBox3->Checked;
	}
	private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		maskedTextBox1->Enabled = checkBox4->Checked;
	}
	private: System::Void checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		maskedTextBox2->Enabled = checkBox5->Checked;
	}
	private: System::Void checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		comboBox1->Enabled = checkBox6->Checked;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		dataGridView1->Rows->Clear();
		StreamReader ^tempFile = gcnew StreamReader(nameOfFile);

		while (tempFile->Peek() >= 0) {
			array <String^>^ cells = (tempFile->ReadLine())->Split(' ', '\0');
			if (cells[0]->CompareTo(""))
				dataGridView1->Rows->Add(cells);
		}

		tempFile->Close();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		if (Changing_NumberOfRace() && Changing_Source() && Changing_Destination() && Changing_TimeIn() && Changing_TimeOut() && Changing_Type()) {

			StreamReader ^tempFile = gcnew StreamReader(nameOfFile);
			dataGridView1->Rows->Clear();

			while (tempFile->Peek() >= 0) {
				array <String^>^ cells = (tempFile->ReadLine())->Split(' ');

				if (cells[0]->CompareTo("")) {
					//Реализация запроса******************************************************

					int isRight = 1;

					if (checkBox1->Checked) {
						if (textBox1->Text->CompareTo(cells[0])) {
							isRight = 0;
							continue;
						}
					}

					if (checkBox2->Checked) {
						if (textBox2->Text->CompareTo(cells[1])) {
							isRight = 0;
							continue;
						}
					}

					if (checkBox3->Checked) {
						if (textBox3->Text->CompareTo(cells[2])) {
							isRight = 0;
							continue;
						}
					}

					if (checkBox4->Checked) {
						if (maskedTextBox1->Text->CompareTo(cells[3])) {
							isRight = 0;
							continue;
						}
					}

					if (checkBox5->Checked) {
						if (maskedTextBox2->Text->CompareTo(cells[4])) {
							isRight = 0;
							continue;
						}
					}

					if (checkBox6->Checked) {
						if ((comboBox1->SelectedItem->ToString())->CompareTo(cells[5])) {
							isRight = 0;
							continue;
						}
					}

					if (isRight) dataGridView1->Rows->Add(cells);
					//************************************************************************
				}
			}
		}
	}
	};
}
