#pragma once
#include <cmath>
#include <iostream>
#include <string>
#include "Windows.h"
#include <fstream>
#include <msclr\marshal_cppstd.h>
#using <System.Windows.Forms.dll>
namespace Project23 {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;

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

	protected:




	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;


	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::CheckBox^ checkBox8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;











	protected:







	protected:






















	protected:











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
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// openFileDialog
			// 
			this->openFileDialog->FileName = L"openFileDialog";
			this->openFileDialog->FilterIndex = 2;
			this->openFileDialog->InitialDirectory = L"c:\\";
			this->openFileDialog->RestoreDirectory = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(12, 511);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(338, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"расчет";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(49, 242);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(44, 17);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"250";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_cash);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(237, 242);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(44, 17);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"400";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_cash);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(603, 285);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(44, 17);
			this->checkBox3->TabIndex = 3;
			this->checkBox3->Text = L"350";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_cash);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(553, 363);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(44, 17);
			this->checkBox4->TabIndex = 4;
			this->checkBox4->Text = L"200";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_cash);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(553, 285);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(44, 17);
			this->checkBox5->TabIndex = 5;
			this->checkBox5->Text = L"300";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox5_cash);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(603, 363);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(44, 17);
			this->checkBox6->TabIndex = 6;
			this->checkBox6->Text = L"250";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox6_cash);
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(540, 426);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(44, 17);
			this->checkBox7->TabIndex = 7;
			this->checkBox7->Text = L"200";
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox7_cash);
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Location = System::Drawing::Point(590, 426);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(44, 17);
			this->checkBox8->TabIndex = 8;
			this->checkBox8->Text = L"150";
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox8_cash);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(449, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"1е";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 289);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(234, 289);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 11;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(49, 63);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(61, 17);
			this->radioButton1->TabIndex = 13;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"первое";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(49, 134);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(60, 17);
			this->radioButton2->TabIndex = 14;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"второе";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(237, 63);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(66, 17);
			this->radioButton3->TabIndex = 15;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"напитки";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(237, 134);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(60, 17);
			this->radioButton4->TabIndex = 16;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"десерт";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(433, 236);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(151, 46);
			this->label5->TabIndex = 17;
			this->label5->Text = L"итог:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 417);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(338, 46);
			this->label4->TabIndex = 18;
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RoyalBlue;
			this->ClientSize = System::Drawing::Size(398, 567);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox8);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

#pragma endregion

	int schet = 0;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		checkBox1->Visible = false;
		checkBox2->Visible = false;
		checkBox3->Visible = false;
		checkBox4->Visible = false;
		checkBox5->Visible = false;
		checkBox6->Visible = false;
		checkBox7->Visible = false;
		checkBox8->Visible = false;
		label2->Visible = false;
		label3->Visible = false;
		radioButton1->Visible = false;
		radioButton2->Visible = false;
		radioButton3->Visible = false;
		radioButton4->Visible = false;
		label4->Text = "— вас " + schet.ToString() + " р";

	}



	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked)
		{
			label2->Text = L"куринный суп\r\n250 р\r\n";
			label3->Text = L"грибной суп\r\n400 р\r\n";
			checkBox1->Visible = true;
			checkBox1->Location = Point(24, 369);
			checkBox2->Visible = true;
			checkBox2->Location = Point(241, 369);

		}

		if (!radioButton1->Checked)
		{
			checkBox1->Visible = false;
			checkBox2->Visible = false;
		}

		if (radioButton2->Checked)
		{
			label2->Text = L"каре €гненка\r\n350 р\r\n";
			label3->Text = L"куринные чипсы\r\n250 р\r\n";
			checkBox3->Visible = true;
			checkBox3->Location = Point(24, 369);
			checkBox4->Visible = true;
			checkBox4->Location = Point(241, 369);
		}

		if (!radioButton2->Checked)
		{
			checkBox3->Visible = false;
			checkBox4->Visible = false;
		}

		if (radioButton3->Checked)
		{
			label2->Text = L"мохито\r\n350 р\r\n";
			label2->Location = Point(15, 290);
			label3->Text = L"лимонад\r\n250 р\r\n";
			checkBox5->Visible = true;
			checkBox5->Location = Point(24, 369);
			checkBox6->Visible = true;
			checkBox6->Location = Point(241, 369);
		}

		if (!radioButton3->Checked)
		{
			checkBox5->Visible = false;
			checkBox6->Visible = false;
		}

		if (radioButton4->Checked)
		{
			label2->Text = L"кекс\r\n200 р\r\n";
			label3->Text = L"мороженное\r\n150 р\r\n";
			checkBox7->Visible = true;
			checkBox7->Location = Point(24, 369);
			checkBox8->Visible = true;
			checkBox8->Location = Point(241, 369);
		}

		if (!radioButton4->Checked)
		{
			checkBox7->Visible = false;
			checkBox8->Visible = false;
		}


	}

	private: System::Void checkBox1_cash(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked)
			schet += 250;
		if (!checkBox1->Checked)
			schet -= 250;
		label4->Text = "Cумма: " + schet.ToString() + "р";

	}
	private: System::Void checkBox2_cash(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox2->Checked)
			schet += 400;
		if (!checkBox2->Checked)
			schet -= 400;
		label4->Text = "Cумма: " + schet.ToString() + "р";
	}
	private: System::Void checkBox3_cash(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox3->Checked)
			schet += 350;
		if (!checkBox3->Checked)
			schet -= 350;
		label4->Text = "Cумма: " + schet.ToString() + "р";

	}
	private: System::Void checkBox4_cash(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox4->Checked)
			schet += 200;
		if (!checkBox4->Checked)
			schet -= 200;
		label4->Text = "Cумма: " + schet.ToString() + "р";
	}
	private: System::Void checkBox5_cash(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox5->Checked)
			schet += 300;
		if (!checkBox5->Checked)
			schet -= 300;
		label4->Text = "Cумма: " + schet.ToString() + "р";
	}
	private: System::Void checkBox6_cash(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox6->Checked)
			schet += 250;
		if (!checkBox6->Checked)
			schet -= 250;
		label4->Text = "Cумма: " + schet.ToString() + "р";
	}
	private: System::Void checkBox7_cash(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox7->Checked)
			schet += 200;
		if (!checkBox7->Checked)
			schet -= 200;
		label4->Text = "Cумма: " + schet.ToString() + "р";
	}
	private: System::Void checkBox8_cash(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox8->Checked)
			schet += 150;
		if (!checkBox8->Checked)
			schet -= 150;
		label4->Text = "Cумма: " + schet.ToString() + "р";
	}






};
}
