#pragma once
#include "autorisation.h"
#include "request.h"
#include "Adding.h"
#include "Editing.h"

namespace Airlines {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// ������ ��� MainFrame
	/// </summary>
	public ref class MainFrame : public System::Windows::Forms::Form
	{
	public:
		MainFrame(void)
		{
			InitializeComponent();

			this->���������ToolStripMenuItem->Enabled = false;
			this->������������ToolStripMenuItem->Enabled = false;
			this->�����ToolStripMenuItem->Enabled = false;
			this->��������������ToolStripMenuItem->Enabled = false;

			autorisation ^access_Window = gcnew autorisation;
			Hide();

			if (TypeOfUser = access_Window->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
				MainFrame::Close();
			if (access_Window->DialogResult == System::Windows::Forms::DialogResult::OK) {
				if (access_Window->ReturnData() == 2) {
					this->�������ToolStripMenuItem->Visible = false;
					this->���������ToolStripMenuItem->Visible = false;
					this->������������ToolStripMenuItem->Visible = false;
					this->��������������ToolStripMenuItem->Visible = false;
					Show();
				}
				else
				{
					this->�������ToolStripMenuItem->Visible = true;
					this->���������ToolStripMenuItem->Visible = true;
					this->������������ToolStripMenuItem->Visible = true;
					this->��������������ToolStripMenuItem->Visible = true;
					Show();
				}
			}
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MainFrame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: String ^nameOfFile;
	private: int TypeOfUser;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����������ToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  NumberOfRaice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Sourse;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  destination;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TimeIn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TimeOut;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  type;













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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->NumberOfRaice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sourse = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->destination = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TimeIn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TimeOut = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->����ToolStripMenuItem,
					this->�����ToolStripMenuItem, this->��������������ToolStripMenuItem, this->����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(676, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->�������ToolStripMenuItem,
					this->�������ToolStripMenuItem, this->���������ToolStripMenuItem, this->������������ToolStripMenuItem, this->��������������ToolStripMenuItem,
					this->�����ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::�������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::�������ToolStripMenuItem_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::���������ToolStripMenuItem_Click);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->������������ToolStripMenuItem->Text = L"��������� ���";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::������������ToolStripMenuItem_Click);
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->��������������ToolStripMenuItem->Text = L"������� �������";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::��������������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::�����ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�����������ToolStripMenuItem });
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->�����ToolStripMenuItem->Text = L"�����";
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->�����������ToolStripMenuItem->Text = L"����� ������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::�����������ToolStripMenuItem_Click);
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������������������ToolStripMenuItem,
					this->�����������������������ToolStripMenuItem, this->�������ToolStripMenuItem
			});
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(108, 20);
			this->��������������ToolStripMenuItem->Text = L"��������������";
			// 
			// �������������������ToolStripMenuItem
			// 
			this->�������������������ToolStripMenuItem->Name = L"�������������������ToolStripMenuItem";
			this->�������������������ToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->�������������������ToolStripMenuItem->Text = L"��������";
			this->�������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::�������������������ToolStripMenuItem_Click);
			// 
			// �����������������������ToolStripMenuItem
			// 
			this->�����������������������ToolStripMenuItem->Name = L"�����������������������ToolStripMenuItem";
			this->�����������������������ToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->�����������������������ToolStripMenuItem->Text = L"�������������";
			this->�����������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::�����������������������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::�������ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�����������ToolStripMenuItem });
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(46, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->�����������ToolStripMenuItem->Text = L"� ����������...";
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
			this->dataGridView1->Location = System::Drawing::Point(15, 37);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(645, 366);
			this->dataGridView1->TabIndex = 1;
			// 
			// NumberOfRaice
			// 
			this->NumberOfRaice->HeaderText = L"����� �����";
			this->NumberOfRaice->MaxInputLength = 7;
			this->NumberOfRaice->Name = L"NumberOfRaice";
			this->NumberOfRaice->ReadOnly = true;
			// 
			// Sourse
			// 
			this->Sourse->HeaderText = L"����� �����������";
			this->Sourse->Name = L"Sourse";
			this->Sourse->ReadOnly = true;
			// 
			// destination
			// 
			this->destination->HeaderText = L"����� ����������";
			this->destination->Name = L"destination";
			this->destination->ReadOnly = true;
			// 
			// TimeIn
			// 
			this->TimeIn->HeaderText = L"�����������";
			this->TimeIn->Name = L"TimeIn";
			this->TimeIn->ReadOnly = true;
			// 
			// TimeOut
			// 
			this->TimeOut->HeaderText = L"��������";
			this->TimeOut->Name = L"TimeOut";
			this->TimeOut->ReadOnly = true;
			// 
			// type
			// 
			this->type->HeaderText = L"�����";
			this->type->Name = L"type";
			this->type->ReadOnly = true;
			// 
			// MainFrame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(676, 420);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainFrame";
			this->Text = L"��������";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void �������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		SaveFileDialog ^creatingFile = gcnew SaveFileDialog;
		creatingFile->Filter = "Text files(*.txt) | *txt";

		if (dataGridView1->RowCount > 1) {
			if (MessageBox::Show("�� ������, ��� ������ ������� ������� ����������?", "��������",
				MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
				if (creatingFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					dataGridView1->Rows->Clear();
					nameOfFile = creatingFile->FileName;
					FileStream ^newFile = File::Create(nameOfFile);
					newFile->Close();
					this->���������ToolStripMenuItem->Enabled = true;
					this->������������ToolStripMenuItem->Enabled = true;
					this->�����ToolStripMenuItem->Enabled = true;
					this->��������������ToolStripMenuItem->Enabled = true;
				}
			}
		}
		else {
			if (creatingFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				dataGridView1->Rows->Clear();
				nameOfFile = creatingFile->FileName;
				FileStream ^newFile = File::Create(nameOfFile);
				newFile->Close();
				this->���������ToolStripMenuItem->Enabled = true;
				this->������������ToolStripMenuItem->Enabled = true;
				this->�����ToolStripMenuItem->Enabled = true;
				this->��������������ToolStripMenuItem->Enabled = true;
			}
		}
	}
	private: System::Void �������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog ^openedFile = gcnew OpenFileDialog;
		openedFile->Filter = "Text files(*.txt)|* txt|All files(*.*)|*.*";
		if (openedFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			dataGridView1->Rows->Clear();

			nameOfFile = openedFile->FileName;
			StreamReader ^tempFile = gcnew StreamReader(nameOfFile);

			String ^row;

			while (tempFile->Peek() >= 0) {
				row = tempFile->ReadLine();
				array <String^>^ cells = row->Split(' ', '\0');

				if (cells[0]->CompareTo(""))
					dataGridView1->Rows->Add(cells);
			}

			this->���������ToolStripMenuItem->Enabled = true;
			this->������������ToolStripMenuItem->Enabled = true;
			this->�����ToolStripMenuItem->Enabled = true;
			this->��������������ToolStripMenuItem->Enabled = true;

			tempFile->Close();
		}
	}
	private: System::Void ���������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		FileStream ^RewritedFile = File::Create(nameOfFile);
		RewritedFile->Close();
		StreamWriter ^Writer = gcnew StreamWriter(nameOfFile);

		for (int i = 0; i <= dataGridView1->RowCount - 1; i++) {
			Writer->Write(dataGridView1->Rows[i]->Cells[0]->Value);
			Writer->Write(" ");
			Writer->Write(dataGridView1->Rows[i]->Cells[1]->Value);
			Writer->Write(" ");
			Writer->Write(dataGridView1->Rows[i]->Cells[2]->Value);
			Writer->Write(" ");
			Writer->Write(dataGridView1->Rows[i]->Cells[3]->Value);
			Writer->Write(" ");
			Writer->Write(dataGridView1->Rows[i]->Cells[4]->Value);
			Writer->Write(" ");
			Writer->Write(dataGridView1->Rows[i]->Cells[5]->Value);
			Writer->WriteLine();
		}
		Writer->Close();
	}
	private: System::Void ������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		SaveFileDialog ^creatingFile = gcnew SaveFileDialog;
		creatingFile->Filter = "Text files(*.txt) | *txt";

		if (creatingFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			nameOfFile = creatingFile->FileName;
			FileStream ^RewritedFile = File::Create(nameOfFile);
			RewritedFile->Close();
			StreamWriter ^Writer = gcnew StreamWriter(nameOfFile);

			for (int i = 0; i < dataGridView1->RowCount - 1; i++) {
				Writer->Write(dataGridView1->Rows[i]->Cells[0]->Value);
				Writer->Write(" ");
				Writer->Write(dataGridView1->Rows[i]->Cells[1]->Value);
				Writer->Write(" ");
				Writer->Write(dataGridView1->Rows[i]->Cells[2]->Value);
				Writer->Write(" ");
				Writer->Write(dataGridView1->Rows[i]->Cells[3]->Value);
				Writer->Write(" ");
				Writer->Write(dataGridView1->Rows[i]->Cells[4]->Value);
				Writer->Write(" ");
				Writer->Write(dataGridView1->Rows[i]->Cells[5]->Value);
				Writer->WriteLine();
			}
			Writer->Close();
		}
	}
	private: System::Void ��������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		autorisation ^access_Window = gcnew autorisation;
		Hide();

		if (TypeOfUser = access_Window->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
			MainFrame::Close();
		if (access_Window->DialogResult == System::Windows::Forms::DialogResult::OK) {

			this->���������ToolStripMenuItem->Enabled = false;
			this->������������ToolStripMenuItem->Enabled = false;
			this->�����ToolStripMenuItem->Enabled = false;
			this->��������������ToolStripMenuItem->Enabled = false;

			if (access_Window->ReturnData() == 2) {
				this->�������ToolStripMenuItem->Visible = false;
				this->���������ToolStripMenuItem->Visible = false;
				this->������������ToolStripMenuItem->Visible = false;
				this->��������������ToolStripMenuItem->Visible = false;
				Show();
			}
			else
			{
				this->�������ToolStripMenuItem->Visible = true;
				this->���������ToolStripMenuItem->Visible = true;
				this->������������ToolStripMenuItem->Visible = true;
				this->��������������ToolStripMenuItem->Visible = true;
				Show();
			}

			dataGridView1->Rows->Clear();
		}
		Show();
	}
	private: System::Void �����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		Close();
	}
	private: System::Void �����������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		request ^newRequest = gcnew request(nameOfFile);
		newRequest->ShowDialog();
	}
	private: System::Void �������������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Adding ^newLine = gcnew Adding(dataGridView1);
		newLine->ShowDialog();
	}
	private: System::Void �����������������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Editing ^newLine = gcnew Editing(dataGridView1);
		newLine->ShowDialog();
	}
	private: System::Void �������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		if (MessageBox::Show("�� �������, ��� ������ ������� ��� ������?", "",
			MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
			dataGridView1->Rows->RemoveAt(dataGridView1->CurrentRow->Index);
			dataGridView1->Refresh();
		}
	}
	};
}
