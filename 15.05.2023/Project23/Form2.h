#pragma once
#include <iostream>                                    // дл€ оператора cout
#include <cmath>                                       // дл€ функции sin

#define PI 3.14159265

namespace Project23 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 190);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(260, 59);
			this->button1->TabIndex = 7;
			this->button1->Text = L"подсчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox2->Location = System::Drawing::Point(158, 57);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->richTextBox2->Size = System::Drawing::Size(114, 45);
			this->richTextBox2->TabIndex = 6;
			this->richTextBox2->Text = L"A";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(12, 57);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->richTextBox1->Size = System::Drawing::Size(112, 45);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = L"N";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(260, 45);
			this->label1->TabIndex = 4;
			this->label1->Text = L"площадь многоугольника";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(12, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(260, 68);
			this->label2->TabIndex = 8;
			this->label2->Text = L"N: кол-во углов \r\nA: длина стороны";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Form2";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text1 = richTextBox1->Text;
		String^ text2 = richTextBox2->Text;

		bool statusA = false, statusB = false;

		bool containsDigits = false;

		for (int i = 0; i < richTextBox1->Text->Length; i++) {
			if (Char::IsDigit(richTextBox1->Text[i])) {
				containsDigits = true;
				break;
			}
		}
		if (containsDigits) {
			statusA = true;
		}
		containsDigits = false;

		for (int i = 0; i < richTextBox2->Text->Length; i++) {
			if (Char::IsDigit(richTextBox2->Text[i])) {
				containsDigits = true;
				break;
			}
		}
		if (containsDigits) {
			statusB = true;
		}



		if (!statusB && !statusA) {
			this->label1->Text = "введите H и A";
		}

		if (!statusB && statusA) {
			this->label1->Text = "введите A";
		}

		if (!statusA && statusB) {
			this->label1->Text = "введите H";
		}

		if (statusA && statusB) {
			this->label1->Text = "";
		}

		String^ strA = richTextBox1->Text;//A
		String^ strB = richTextBox2->Text;//B


		int N, A;

		Int32::TryParse(strA, N);
		Int32::TryParse(strB, A);

		double S = (PI / (4 * N * (pow(sin(PI/N), 2)))) * pow(A, 2);
		
		if (statusA && statusB) {
			if (S >= 0) {
				String^ strS = S.ToString("F2");
				this->label1->Text = "ѕлощадь: " + strS;
			}
			else
			{
				this->label1->Text = "ќшибка";
			}
		}
	}

};
}
