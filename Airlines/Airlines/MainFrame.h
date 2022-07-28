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
	/// Ñâîäêà äëÿ MainFrame
	/// </summary>
	public ref class MainFrame : public System::Windows::Forms::Form
	{
	public:
		MainFrame(void)
		{
			InitializeComponent();

			this->ñîõğàíèòüToolStripMenuItem->Enabled = false;
			this->ñîõğàíèòüÊàêToolStripMenuItem->Enabled = false;
			this->ïîèñêToolStripMenuItem->Enabled = false;
			this->ğåäàêòèğîâàíèåToolStripMenuItem->Enabled = false;

			autorisation ^access_Window = gcnew autorisation;
			Hide();

			if (TypeOfUser = access_Window->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
				MainFrame::Close();
			if (access_Window->DialogResult == System::Windows::Forms::DialogResult::OK) {
				if (access_Window->ReturnData() == 2) {
					this->ñîçäàòüToolStripMenuItem->Visible = false;
					this->ñîõğàíèòüToolStripMenuItem->Visible = false;
					this->ñîõğàíèòüÊàêToolStripMenuItem->Visible = false;
					this->ğåäàêòèğîâàíèåToolStripMenuItem->Visible = false;
					Show();
				}
				else
				{
					this->ñîçäàòüToolStripMenuItem->Visible = true;
					this->ñîõğàíèòüToolStripMenuItem->Visible = true;
					this->ñîõğàíèòüÊàêToolStripMenuItem->Visible = true;
					this->ğåäàêòèğîâàíèåToolStripMenuItem->Visible = true;
					Show();
				}
			}
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
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
	private: System::Windows::Forms::ToolStripMenuItem^  ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñîçäàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  îòêğûòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñîõğàíèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñîõğàíèòüÊàêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñìåíèòüÀêêàóíòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïîèñêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  íàéòèÇàïèñèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ğåäàêòèğîâàíèåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  äîáàâèòüÍîâóşÇàïèñüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ğåäàêòèğîâàòüÂûäåëåííóşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  óäàëèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  èãğàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  âĞàçğàáîòêåToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  NumberOfRaice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Sourse;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  destination;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TimeIn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TimeOut;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  type;













	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîçäàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêğûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüÊàêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñìåíèòüÀêêàóíòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîèñêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàéòèÇàïèñèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğåäàêòèğîâàíèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîáàâèòüÍîâóşÇàïèñüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğåäàêòèğîâàòüÂûäåëåííóşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óäàëèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èãğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âĞàçğàáîòêåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->ôàéëToolStripMenuItem,
					this->ïîèñêToolStripMenuItem, this->ğåäàêòèğîâàíèåToolStripMenuItem, this->èãğàToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(676, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->ñîçäàòüToolStripMenuItem,
					this->îòêğûòüToolStripMenuItem, this->ñîõğàíèòüToolStripMenuItem, this->ñîõğàíèòüÊàêToolStripMenuItem, this->ñìåíèòüÀêêàóíòToolStripMenuItem,
					this->âûõîäToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// ñîçäàòüToolStripMenuItem
			// 
			this->ñîçäàòüToolStripMenuItem->Name = L"ñîçäàòüToolStripMenuItem";
			this->ñîçäàòüToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->ñîçäàòüToolStripMenuItem->Text = L"Ñîçäàòü";
			this->ñîçäàòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::ñîçäàòüToolStripMenuItem_Click);
			// 
			// îòêğûòüToolStripMenuItem
			// 
			this->îòêğûòüToolStripMenuItem->Name = L"îòêğûòüToolStripMenuItem";
			this->îòêğûòüToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->îòêğûòüToolStripMenuItem->Text = L"Îòêğûòü";
			this->îòêğûòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::îòêğûòüToolStripMenuItem_Click);
			// 
			// ñîõğàíèòüToolStripMenuItem
			// 
			this->ñîõğàíèòüToolStripMenuItem->Name = L"ñîõğàíèòüToolStripMenuItem";
			this->ñîõğàíèòüToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->ñîõğàíèòüToolStripMenuItem->Text = L"Ñîõğàíèòü";
			this->ñîõğàíèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::ñîõğàíèòüToolStripMenuItem_Click);
			// 
			// ñîõğàíèòüÊàêToolStripMenuItem
			// 
			this->ñîõğàíèòüÊàêToolStripMenuItem->Name = L"ñîõğàíèòüÊàêToolStripMenuItem";
			this->ñîõğàíèòüÊàêToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->ñîõğàíèòüÊàêToolStripMenuItem->Text = L"Ñîõğàíèòü êàê";
			this->ñîõğàíèòüÊàêToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::ñîõğàíèòüÊàêToolStripMenuItem_Click);
			// 
			// ñìåíèòüÀêêàóíòToolStripMenuItem
			// 
			this->ñìåíèòüÀêêàóíòToolStripMenuItem->Name = L"ñìåíèòüÀêêàóíòToolStripMenuItem";
			this->ñìåíèòüÀêêàóíòToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->ñìåíèòüÀêêàóíòToolStripMenuItem->Text = L"Ñìåíèòü àêêàóíò";
			this->ñìåíèòüÀêêàóíòToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::ñìåíèòüÀêêàóíòToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::âûõîäToolStripMenuItem_Click);
			// 
			// ïîèñêToolStripMenuItem
			// 
			this->ïîèñêToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->íàéòèÇàïèñèToolStripMenuItem });
			this->ïîèñêToolStripMenuItem->Name = L"ïîèñêToolStripMenuItem";
			this->ïîèñêToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->ïîèñêToolStripMenuItem->Text = L"Ïîèñê";
			// 
			// íàéòèÇàïèñèToolStripMenuItem
			// 
			this->íàéòèÇàïèñèToolStripMenuItem->Name = L"íàéòèÇàïèñèToolStripMenuItem";
			this->íàéòèÇàïèñèToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->íàéòèÇàïèñèToolStripMenuItem->Text = L"Íàéòè çàïèñè";
			this->íàéòèÇàïèñèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::íàéòèÇàïèñèToolStripMenuItem_Click);
			// 
			// ğåäàêòèğîâàíèåToolStripMenuItem
			// 
			this->ğåäàêòèğîâàíèåToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->äîáàâèòüÍîâóşÇàïèñüToolStripMenuItem,
					this->ğåäàêòèğîâàòüÂûäåëåííóşToolStripMenuItem, this->óäàëèòüToolStripMenuItem
			});
			this->ğåäàêòèğîâàíèåToolStripMenuItem->Name = L"ğåäàêòèğîâàíèåToolStripMenuItem";
			this->ğåäàêòèğîâàíèåToolStripMenuItem->Size = System::Drawing::Size(108, 20);
			this->ğåäàêòèğîâàíèåToolStripMenuItem->Text = L"Ğåäàêòèğîâàíèå";
			// 
			// äîáàâèòüÍîâóşÇàïèñüToolStripMenuItem
			// 
			this->äîáàâèòüÍîâóşÇàïèñüToolStripMenuItem->Name = L"äîáàâèòüÍîâóşÇàïèñüToolStripMenuItem";
			this->äîáàâèòüÍîâóşÇàïèñüToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->äîáàâèòüÍîâóşÇàïèñüToolStripMenuItem->Text = L"Äîáàâèòü";
			this->äîáàâèòüÍîâóşÇàïèñüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::äîáàâèòüÍîâóşÇàïèñüToolStripMenuItem_Click);
			// 
			// ğåäàêòèğîâàòüÂûäåëåííóşToolStripMenuItem
			// 
			this->ğåäàêòèğîâàòüÂûäåëåííóşToolStripMenuItem->Name = L"ğåäàêòèğîâàòüÂûäåëåííóşToolStripMenuItem";
			this->ğåäàêòèğîâàòüÂûäåëåííóşToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->ğåäàêòèğîâàòüÂûäåëåííóşToolStripMenuItem->Text = L"Ğåäàêòèğîâàòü";
			this->ğåäàêòèğîâàòüÂûäåëåííóşToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::ğåäàêòèğîâàòüÂûäåëåííóşToolStripMenuItem_Click);
			// 
			// óäàëèòüToolStripMenuItem
			// 
			this->óäàëèòüToolStripMenuItem->Name = L"óäàëèòüToolStripMenuItem";
			this->óäàëèòüToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->óäàëèòüToolStripMenuItem->Text = L"Óäàëèòü";
			this->óäàëèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::óäàëèòüToolStripMenuItem_Click);
			// 
			// èãğàToolStripMenuItem
			// 
			this->èãğàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->âĞàçğàáîòêåToolStripMenuItem });
			this->èãğàToolStripMenuItem->Name = L"èãğàToolStripMenuItem";
			this->èãğàToolStripMenuItem->Size = System::Drawing::Size(46, 20);
			this->èãğàToolStripMenuItem->Text = L"Èãğà";
			// 
			// âĞàçğàáîòêåToolStripMenuItem
			// 
			this->âĞàçğàáîòêåToolStripMenuItem->Name = L"âĞàçğàáîòêåToolStripMenuItem";
			this->âĞàçğàáîòêåToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->âĞàçğàáîòêåToolStripMenuItem->Text = L"Â ğàçğàáîòêå...";
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
			this->NumberOfRaice->HeaderText = L"Íîìåğ ğåéñà";
			this->NumberOfRaice->MaxInputLength = 7;
			this->NumberOfRaice->Name = L"NumberOfRaice";
			this->NumberOfRaice->ReadOnly = true;
			// 
			// Sourse
			// 
			this->Sourse->HeaderText = L"Ïóíêò îòïğàâëåíèÿ";
			this->Sourse->Name = L"Sourse";
			this->Sourse->ReadOnly = true;
			// 
			// destination
			// 
			this->destination->HeaderText = L"Ïóíêò íàçíà÷åíèÿ";
			this->destination->Name = L"destination";
			this->destination->ReadOnly = true;
			// 
			// TimeIn
			// 
			this->TimeIn->HeaderText = L"Îòïğàâëåíèå";
			this->TimeIn->Name = L"TimeIn";
			this->TimeIn->ReadOnly = true;
			// 
			// TimeOut
			// 
			this->TimeOut->HeaderText = L"Ïğèáûòèå";
			this->TimeOut->Name = L"TimeOut";
			this->TimeOut->ReadOnly = true;
			// 
			// type
			// 
			this->type->HeaderText = L"Êëàññ";
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
			this->Text = L"Àığîïîğò";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ñîçäàòüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		SaveFileDialog ^creatingFile = gcnew SaveFileDialog;
		creatingFile->Filter = "Text files(*.txt) | *txt";

		if (dataGridView1->RowCount > 1) {
			if (MessageBox::Show("Âû âåğåíû, ÷òî õîòèòå çàêğûòü òåêóùåå ğàñïèñàíèå?", "Àığîïîğò",
				MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
				if (creatingFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					dataGridView1->Rows->Clear();
					nameOfFile = creatingFile->FileName;
					FileStream ^newFile = File::Create(nameOfFile);
					newFile->Close();
					this->ñîõğàíèòüToolStripMenuItem->Enabled = true;
					this->ñîõğàíèòüÊàêToolStripMenuItem->Enabled = true;
					this->ïîèñêToolStripMenuItem->Enabled = true;
					this->ğåäàêòèğîâàíèåToolStripMenuItem->Enabled = true;
				}
			}
		}
		else {
			if (creatingFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				dataGridView1->Rows->Clear();
				nameOfFile = creatingFile->FileName;
				FileStream ^newFile = File::Create(nameOfFile);
				newFile->Close();
				this->ñîõğàíèòüToolStripMenuItem->Enabled = true;
				this->ñîõğàíèòüÊàêToolStripMenuItem->Enabled = true;
				this->ïîèñêToolStripMenuItem->Enabled = true;
				this->ğåäàêòèğîâàíèåToolStripMenuItem->Enabled = true;
			}
		}
	}
	private: System::Void îòêğûòüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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

			this->ñîõğàíèòüToolStripMenuItem->Enabled = true;
			this->ñîõğàíèòüÊàêToolStripMenuItem->Enabled = true;
			this->ïîèñêToolStripMenuItem->Enabled = true;
			this->ğåäàêòèğîâàíèåToolStripMenuItem->Enabled = true;

			tempFile->Close();
		}
	}
	private: System::Void ñîõğàíèòüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	private: System::Void ñîõğàíèòüÊàêToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	private: System::Void ñìåíèòüÀêêàóíòToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		autorisation ^access_Window = gcnew autorisation;
		Hide();

		if (TypeOfUser = access_Window->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
			MainFrame::Close();
		if (access_Window->DialogResult == System::Windows::Forms::DialogResult::OK) {

			this->ñîõğàíèòüToolStripMenuItem->Enabled = false;
			this->ñîõğàíèòüÊàêToolStripMenuItem->Enabled = false;
			this->ïîèñêToolStripMenuItem->Enabled = false;
			this->ğåäàêòèğîâàíèåToolStripMenuItem->Enabled = false;

			if (access_Window->ReturnData() == 2) {
				this->ñîçäàòüToolStripMenuItem->Visible = false;
				this->ñîõğàíèòüToolStripMenuItem->Visible = false;
				this->ñîõğàíèòüÊàêToolStripMenuItem->Visible = false;
				this->ğåäàêòèğîâàíèåToolStripMenuItem->Visible = false;
				Show();
			}
			else
			{
				this->ñîçäàòüToolStripMenuItem->Visible = true;
				this->ñîõğàíèòüToolStripMenuItem->Visible = true;
				this->ñîõğàíèòüÊàêToolStripMenuItem->Visible = true;
				this->ğåäàêòèğîâàíèåToolStripMenuItem->Visible = true;
				Show();
			}

			dataGridView1->Rows->Clear();
		}
		Show();
	}
	private: System::Void âûõîäToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		Close();
	}
	private: System::Void íàéòèÇàïèñèToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		request ^newRequest = gcnew request(nameOfFile);
		newRequest->ShowDialog();
	}
	private: System::Void äîáàâèòüÍîâóşÇàïèñüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Adding ^newLine = gcnew Adding(dataGridView1);
		newLine->ShowDialog();
	}
	private: System::Void ğåäàêòèğîâàòüÂûäåëåííóşToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Editing ^newLine = gcnew Editing(dataGridView1);
		newLine->ShowDialog();
	}
	private: System::Void óäàëèòüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		if (MessageBox::Show("Âû óâåğåíû, ÷òî õîòèòå óäàëèòü ıòó çàïèñü?", "",
			MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
			dataGridView1->Rows->RemoveAt(dataGridView1->CurrentRow->Index);
			dataGridView1->Refresh();
		}
	}
	};
}
