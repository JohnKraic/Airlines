#pragma once

namespace Airlines {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Adding
	/// </summary>
	public ref class Editing : public System::Windows::Forms::Form
	{
	public:
		Editing(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

		Editing(DataGridView ^old)
		{
			InitializeComponent();
			last = old;

			textBox1->Text = (last->Rows[last->CurrentRow->Index]->Cells[0]->Value)->ToString();
			textBox2->Text = (last->Rows[last->CurrentRow->Index]->Cells[1]->Value)->ToString();
			textBox3->Text = (last->Rows[last->CurrentRow->Index]->Cells[2]->Value)->ToString();
			maskedTextBox1->Text = (last->Rows[last->CurrentRow->Index]->Cells[3]->Value)->ToString();
			maskedTextBox2->Text = (last->Rows[last->CurrentRow->Index]->Cells[4]->Value)->ToString();
			comboBox1->Text = (last->Rows[last->CurrentRow->Index]->Cells[5]->Value)->ToString();


		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Editing()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected:
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

	protected:
	private: DataGridView ^last;
	private: Int32 Changing_NumberOfRace() {
		if (!(textBox1->Text->CompareTo(""))) {
			if (!Error->Text->CompareTo(""))
				Error->Text = "���� \"����� �����\" �� ����� ���� ������!";
			return 0;
		}
		else {
			Error->Text = "";
			return 1;
		}
	}
	private: Int32 Changing_Source() {
		if (!((textBox2->Text)->CompareTo(""))) {
			if (!Error->Text->CompareTo(""))
				Error->Text = "� ���� \"����� �����������\" ����� �� ������!";
			return 0;
		}
		else {
			Error->Text = "";
			return 1;
		}
	}
	private: Int32 Changing_Destination() {
		if (!((textBox3->Text)->CompareTo(""))) {
			if (!Error->Text->CompareTo(""))
				Error->Text = "� ���� \"����� ��������\" ����� �� ������!";
			return 0;
		}
		else {
			Error->Text = "";
			return 1;
		}
	}
	private: Int32 Changing_TimeIn() {
		if (!(maskedTextBox1->Text->CompareTo(""))) {
			if (!Error->Text->CompareTo(""))
				Error->Text = "����� ���������� ������� �������";
			return 0;
		}
		else {
			Error->Text = "";
			return 1;
		}
	}
	private: Int32 Changing_TimeOut() {
		if (!(maskedTextBox2->Text->CompareTo(""))) {
			if (!Error->Text->CompareTo(""))
				Error->Text = "����� �������� ������� �������";
			return 0;
		}
		else {
			Error->Text = "";
			return 1;
		}
	}
	private: Int32 Changing_Type() {
		if (!((comboBox1->Text)->CompareTo(""))) {
			if (!Error->Text->CompareTo(""))
				Error->Text = "� ���� \"�����\" ����� �� ������!";
			return 0;
		}
		else {
			Error->Text = "";
			return 1;
		}
	}


	protected:
	private: System::Windows::Forms::Label^  Error;
	private: System::Windows::Forms::Button^  button1;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Error = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->SuspendLayout();
			// 
			// Error
			// 
			this->Error->AutoSize = true;
			this->Error->ForeColor = System::Drawing::Color::Red;
			this->Error->Location = System::Drawing::Point(22, 79);
			this->Error->Name = L"Error";
			this->Error->Size = System::Drawing::Size(0, 13);
			this->Error->TabIndex = 22;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(278, 101);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 23;
			this->button1->Text = L"��������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Editing::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"������", L"������", L"������" });
			this->comboBox1->Location = System::Drawing::Point(468, 46);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(80, 21);
			this->comboBox1->TabIndex = 37;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(415, 46);
			this->maskedTextBox2->Mask = L"00:00";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(34, 20);
			this->maskedTextBox2->TabIndex = 35;
			this->maskedTextBox2->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(354, 46);
			this->maskedTextBox1->Mask = L"00:00";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(34, 20);
			this->maskedTextBox1->TabIndex = 36;
			this->maskedTextBox1->ValidatingType = System::DateTime::typeid;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(489, 18);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 13);
			this->label6->TabIndex = 29;
			this->label6->Text = L"�����";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(412, 10);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 26);
			this->label7->TabIndex = 30;
			this->label7->Text = L"����� \r\n��������";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(337, 10);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 26);
			this->label4->TabIndex = 31;
			this->label4->Text = L"����� \r\n�����������\r\n";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(231, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 13);
			this->label3->TabIndex = 32;
			this->label3->Text = L"����� ��������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(125, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 13);
			this->label2->TabIndex = 33;
			this->label2->Text = L"����� �����������";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(48, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 34;
			this->label1->Text = L"����� �����";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(234, 46);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 26;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(128, 46);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 27;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(51, 46);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(71, 20);
			this->textBox1->TabIndex = 28;
			// 
			// Editing
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(596, 136);
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
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Error);
			this->Name = L"Editing";
			this->Text = L"��������������";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (Changing_NumberOfRace() && Changing_Source() && Changing_Destination() && Changing_TimeIn() && Changing_TimeOut() && Changing_Type()) {
			last->Rows[last->CurrentRow->Index]->Cells[0]->Value = textBox1->Text;
			last->Rows[last->CurrentRow->Index]->Cells[1]->Value = textBox2->Text;
			last->Rows[last->CurrentRow->Index]->Cells[2]->Value = textBox3->Text;
			last->Rows[last->CurrentRow->Index]->Cells[3]->Value = maskedTextBox1->Text;
			last->Rows[last->CurrentRow->Index]->Cells[4]->Value = maskedTextBox2->Text;
			last->Rows[last->CurrentRow->Index]->Cells[5]->Value = comboBox1->Text;
		}
	}
	};
}
