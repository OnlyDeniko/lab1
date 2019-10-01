#pragma once
#include <msclr\marshal_cppstd.h>
#include"help_func.h"
#include"TSet.h"
TSet a, b, result;
namespace recall {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  SizeBox;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  sizeUniverseButton;
	private: System::Windows::Forms::TextBox^  FirstSetBox;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  AddFirstSetButton;
	private: System::Windows::Forms::Button^  DelFirstSetButton;
	private: System::Windows::Forms::TextBox^  ShowFirstSetBox;
	private: System::Windows::Forms::TextBox^  SecondSetBox;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  ShowSecondSetBox;
	private: System::Windows::Forms::Button^  AddSecondSetButton;
	private: System::Windows::Forms::Button^  DeleteSecondSetButton;
	private: System::Windows::Forms::Button^  InverseFirstSetButton;
	private: System::Windows::Forms::Button^  InverseSecondSetButton;
	private: System::Windows::Forms::ListBox^  ChooseBox;
	private: System::Windows::Forms::TextBox^  ResultBox;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  CalcButton;


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SizeBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->sizeUniverseButton = (gcnew System::Windows::Forms::Button());
			this->FirstSetBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->AddFirstSetButton = (gcnew System::Windows::Forms::Button());
			this->DelFirstSetButton = (gcnew System::Windows::Forms::Button());
			this->ShowFirstSetBox = (gcnew System::Windows::Forms::TextBox());
			this->SecondSetBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ShowSecondSetBox = (gcnew System::Windows::Forms::TextBox());
			this->AddSecondSetButton = (gcnew System::Windows::Forms::Button());
			this->DeleteSecondSetButton = (gcnew System::Windows::Forms::Button());
			this->InverseFirstSetButton = (gcnew System::Windows::Forms::Button());
			this->InverseSecondSetButton = (gcnew System::Windows::Forms::Button());
			this->ChooseBox = (gcnew System::Windows::Forms::ListBox());
			this->ResultBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->CalcButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// SizeBox
			// 
			this->SizeBox->Location = System::Drawing::Point(533, 12);
			this->SizeBox->Name = L"SizeBox";
			this->SizeBox->Size = System::Drawing::Size(136, 20);
			this->SizeBox->TabIndex = 0;
			this->SizeBox->TextChanged += gcnew System::EventHandler(this, &MyForm::SizeBox_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(442, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Size of universe:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(556, 358);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 31);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// sizeUniverseButton
			// 
			this->sizeUniverseButton->Location = System::Drawing::Point(556, 38);
			this->sizeUniverseButton->Name = L"sizeUniverseButton";
			this->sizeUniverseButton->Size = System::Drawing::Size(86, 29);
			this->sizeUniverseButton->TabIndex = 3;
			this->sizeUniverseButton->Text = L"set size";
			this->sizeUniverseButton->UseVisualStyleBackColor = true;
			this->sizeUniverseButton->Click += gcnew System::EventHandler(this, &MyForm::sizeUniverseButton_Click);
			// 
			// FirstSetBox
			// 
			this->FirstSetBox->Location = System::Drawing::Point(59, 94);
			this->FirstSetBox->Name = L"FirstSetBox";
			this->FirstSetBox->Size = System::Drawing::Size(456, 20);
			this->FirstSetBox->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"SET A:";
			// 
			// AddFirstSetButton
			// 
			this->AddFirstSetButton->Location = System::Drawing::Point(533, 94);
			this->AddFirstSetButton->Name = L"AddFirstSetButton";
			this->AddFirstSetButton->Size = System::Drawing::Size(65, 20);
			this->AddFirstSetButton->TabIndex = 6;
			this->AddFirstSetButton->Text = L"add";
			this->AddFirstSetButton->UseVisualStyleBackColor = true;
			this->AddFirstSetButton->Click += gcnew System::EventHandler(this, &MyForm::AddFirstSetButton_Click);
			// 
			// DelFirstSetButton
			// 
			this->DelFirstSetButton->Location = System::Drawing::Point(604, 94);
			this->DelFirstSetButton->Name = L"DelFirstSetButton";
			this->DelFirstSetButton->Size = System::Drawing::Size(65, 20);
			this->DelFirstSetButton->TabIndex = 7;
			this->DelFirstSetButton->Text = L"delete";
			this->DelFirstSetButton->UseVisualStyleBackColor = true;
			this->DelFirstSetButton->Click += gcnew System::EventHandler(this, &MyForm::DelFirstSetButton_Click);
			// 
			// ShowFirstSetBox
			// 
			this->ShowFirstSetBox->Location = System::Drawing::Point(59, 120);
			this->ShowFirstSetBox->Multiline = true;
			this->ShowFirstSetBox->Name = L"ShowFirstSetBox";
			this->ShowFirstSetBox->ReadOnly = true;
			this->ShowFirstSetBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->ShowFirstSetBox->Size = System::Drawing::Size(456, 45);
			this->ShowFirstSetBox->TabIndex = 8;
			// 
			// SecondSetBox
			// 
			this->SecondSetBox->Location = System::Drawing::Point(59, 171);
			this->SecondSetBox->Name = L"SecondSetBox";
			this->SecondSetBox->Size = System::Drawing::Size(456, 20);
			this->SecondSetBox->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 174);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"SET B:";
			// 
			// ShowSecondSetBox
			// 
			this->ShowSecondSetBox->Location = System::Drawing::Point(59, 197);
			this->ShowSecondSetBox->Multiline = true;
			this->ShowSecondSetBox->Name = L"ShowSecondSetBox";
			this->ShowSecondSetBox->ReadOnly = true;
			this->ShowSecondSetBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->ShowSecondSetBox->Size = System::Drawing::Size(456, 45);
			this->ShowSecondSetBox->TabIndex = 11;
			// 
			// AddSecondSetButton
			// 
			this->AddSecondSetButton->Location = System::Drawing::Point(533, 171);
			this->AddSecondSetButton->Name = L"AddSecondSetButton";
			this->AddSecondSetButton->Size = System::Drawing::Size(65, 20);
			this->AddSecondSetButton->TabIndex = 12;
			this->AddSecondSetButton->Text = L"add";
			this->AddSecondSetButton->UseVisualStyleBackColor = true;
			this->AddSecondSetButton->Click += gcnew System::EventHandler(this, &MyForm::AddSecondSetButton_Click);
			// 
			// DeleteSecondSetButton
			// 
			this->DeleteSecondSetButton->Location = System::Drawing::Point(604, 171);
			this->DeleteSecondSetButton->Name = L"DeleteSecondSetButton";
			this->DeleteSecondSetButton->Size = System::Drawing::Size(65, 20);
			this->DeleteSecondSetButton->TabIndex = 13;
			this->DeleteSecondSetButton->Text = L"delete";
			this->DeleteSecondSetButton->UseVisualStyleBackColor = true;
			this->DeleteSecondSetButton->Click += gcnew System::EventHandler(this, &MyForm::DeleteSecondSetButton_Click);
			// 
			// InverseFirstSetButton
			// 
			this->InverseFirstSetButton->Location = System::Drawing::Point(533, 120);
			this->InverseFirstSetButton->Name = L"InverseFirstSetButton";
			this->InverseFirstSetButton->Size = System::Drawing::Size(136, 20);
			this->InverseFirstSetButton->TabIndex = 14;
			this->InverseFirstSetButton->Text = L"inverse Set A";
			this->InverseFirstSetButton->UseVisualStyleBackColor = true;
			this->InverseFirstSetButton->Click += gcnew System::EventHandler(this, &MyForm::InverseFirstSetButton_Click);
			// 
			// InverseSecondSetButton
			// 
			this->InverseSecondSetButton->Location = System::Drawing::Point(533, 197);
			this->InverseSecondSetButton->Name = L"InverseSecondSetButton";
			this->InverseSecondSetButton->Size = System::Drawing::Size(136, 20);
			this->InverseSecondSetButton->TabIndex = 15;
			this->InverseSecondSetButton->Text = L"inverse Set B";
			this->InverseSecondSetButton->UseVisualStyleBackColor = true;
			this->InverseSecondSetButton->Click += gcnew System::EventHandler(this, &MyForm::InverseSecondSetButton_Click);
			// 
			// ChooseBox
			// 
			this->ChooseBox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ChooseBox->FormattingEnabled = true;
			this->ChooseBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Intersection", L"Union", L"A - B", L"B - A" });
			this->ChooseBox->Location = System::Drawing::Point(533, 240);
			this->ChooseBox->Name = L"ChooseBox";
			this->ChooseBox->Size = System::Drawing::Size(136, 30);
			this->ChooseBox->TabIndex = 16;
			this->ChooseBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ChooseBox_SelectedIndexChanged);
			// 
			// ResultBox
			// 
			this->ResultBox->Location = System::Drawing::Point(59, 289);
			this->ResultBox->Multiline = true;
			this->ResultBox->Name = L"ResultBox";
			this->ResultBox->ReadOnly = true;
			this->ResultBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->ResultBox->Size = System::Drawing::Size(456, 71);
			this->ResultBox->TabIndex = 17;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(0, 292);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 13);
			this->label4->TabIndex = 18;
			this->label4->Text = L"RESULT:";
			// 
			// CalcButton
			// 
			this->CalcButton->Location = System::Drawing::Point(533, 288);
			this->CalcButton->Name = L"CalcButton";
			this->CalcButton->Size = System::Drawing::Size(135, 20);
			this->CalcButton->TabIndex = 19;
			this->CalcButton->Text = L"Calc";
			this->CalcButton->UseVisualStyleBackColor = true;
			this->CalcButton->Click += gcnew System::EventHandler(this, &MyForm::CalcButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(681, 401);
			this->Controls->Add(this->CalcButton);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->ResultBox);
			this->Controls->Add(this->ChooseBox);
			this->Controls->Add(this->InverseSecondSetButton);
			this->Controls->Add(this->InverseFirstSetButton);
			this->Controls->Add(this->DeleteSecondSetButton);
			this->Controls->Add(this->AddSecondSetButton);
			this->Controls->Add(this->ShowSecondSetBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->SecondSetBox);
			this->Controls->Add(this->ShowFirstSetBox);
			this->Controls->Add(this->DelFirstSetButton);
			this->Controls->Add(this->AddFirstSetButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->FirstSetBox);
			this->Controls->Add(this->sizeUniverseButton);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->SizeBox);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		System::Void SizeBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		}
	
		System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			Close();
		}
		System::Void sizeUniverseButton_Click(System::Object^  sender, System::EventArgs^  e) {
			std::string str = msclr::interop::marshal_as<std::string>(SizeBox->Text);
			bool ok = 1;
			for (int i = 0; i < (int)str.size(); i++) {
				if (!(str[i] >= '0' && str[i] <= '9')) {
					ok = 0;
					break;
				}
			}
			if (!ok) {
				MessageBox::Show("REPEAT ENTER");
			}
			else {
				int size = atoi(str.c_str());
				a = TSet(size);
				b = TSet(size);
				result = TSet(size);
				SizeBox->ReadOnly = true;
			}
			
		}
		System::Void AddFirstSetButton_Click(System::Object^  sender, System::EventArgs^  e) {
			std::string str = msclr::interop::marshal_as<std::string>(FirstSetBox->Text);
			std::string *w = new std::string[(str.size() + 5) * 2];
			if (str.back() != ' ') str += ' ';
			int k = 0;
			get_words_diff_razdel(str, " !?,.", w, k);
			for (int i = 0; i < k; i++) {
				bool ok = 1;
				for (auto j : w[i]) {
					if (!(j >= '0' && j <= '9')) ok = 0;
				}
				if (ok) {
					a.insert(atoi(w[i].c_str()));
					/*String^ gg = gcnew System::String(w[i].c_str());
					MessageBox::Show(gg);*/
				}
			}
			FirstSetBox->Clear();
			ShowFirstSetBox->Text = gcnew System::String(a.getField().c_str());
		}
		System::Void DelFirstSetButton_Click(System::Object^  sender, System::EventArgs^  e) {
			std::string str = msclr::interop::marshal_as<std::string>(FirstSetBox->Text);
			std::string *w = new std::string[(str.size() + 5) * 2];
			if (str.back() != ' ') str += ' ';
			int k = 0;
			get_words_diff_razdel(str, " !?,.", w, k);
			for (int i = 0; i < k; i++) {
				bool ok = 1;
				for (auto j : w[i]) {
					if (!(j >= '0' && j <= '9')) ok = 0;
				}
				if (ok) {
					a.erase(atoi(w[i].c_str()));
				}
			}
			FirstSetBox->Clear();
			ShowFirstSetBox->Text = gcnew System::String(a.getField().c_str());
		}
		System::Void AddSecondSetButton_Click(System::Object^  sender, System::EventArgs^  e) {
			std::string str = msclr::interop::marshal_as<std::string>(SecondSetBox->Text);
			std::string *w = new std::string[(str.size() + 5) * 2];
			if (str.back() != ' ') str += ' ';
			int k = 0;
			get_words_diff_razdel(str, " !?,.", w, k);
			for (int i = 0; i < k; i++) {
				bool ok = 1;
				for (auto j : w[i]) {
					if (!(j >= '0' && j <= '9')) ok = 0;
				}
				if (ok) {
					b.insert(atoi(w[i].c_str()));
					/*String^ gg = gcnew System::String(w[i].c_str());
					MessageBox::Show(gg);*/
				}
			}
			SecondSetBox->Clear();
			ShowSecondSetBox->Text = gcnew System::String(b.getField().c_str());
		}
		System::Void DeleteSecondSetButton_Click(System::Object^  sender, System::EventArgs^  e) {
			std::string str = msclr::interop::marshal_as<std::string>(SecondSetBox->Text);
			std::string *w = new std::string[(str.size() + 5) * 2];
			if (str.back() != ' ') str += ' ';
			int k = 0;
			get_words_diff_razdel(str, " !?,.", w, k);
			for (int i = 0; i < k; i++) {
				bool ok = 1;
				for (auto j : w[i]) {
					if (!(j >= '0' && j <= '9')) ok = 0;
				}
				if (ok) {
					b.erase(atoi(w[i].c_str()));
				}
			}
			SecondSetBox->Clear();
			ShowSecondSetBox->Text = gcnew System::String(b.getField().c_str());
		}
		System::Void InverseFirstSetButton_Click(System::Object^  sender, System::EventArgs^  e) {
			FirstSetBox->Clear();
			a = ~a;
			ShowFirstSetBox->Text = gcnew System::String(a.getField().c_str());
		}
		System::Void InverseSecondSetButton_Click(System::Object^  sender, System::EventArgs^  e) {
			SecondSetBox->Clear();
			b = ~b;
			ShowSecondSetBox->Text = gcnew System::String(b.getField().c_str());
		}
		System::Void ChooseBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			//MessageBox::Show(ChooseBox->SelectedItem->ToString());
		}
		System::Void CalcButton_Click(System::Object^  sender, System::EventArgs^  e) {
			if (ChooseBox->SelectedIndex == -1) {
				MessageBox::Show("SELECT");
				return;
			}
			else if (ChooseBox->SelectedItem->ToString() == "Intersection") {
				result = a * b;
			}
			else if (ChooseBox->SelectedItem->ToString() == "Union") {
				result = a + b;
			}
			else if (ChooseBox->SelectedItem->ToString() == "A - B") {
				result = a - b;
			}
			else if (ChooseBox->SelectedItem->ToString() == "B - A") {
				result = b - a;
			}
			ResultBox->Text = gcnew System::String(result.getField().c_str());
		}
};
}
