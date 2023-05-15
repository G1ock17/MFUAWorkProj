#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

namespace Project23 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label;

	protected:



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(15, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(881, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�������";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 524);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(884, 42);
			this->button1->TabIndex = 3;
			this->button1->Text = L"����������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label
			// 
			this->label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label->ForeColor = System::Drawing::SystemColors::Control;
			this->label->Location = System::Drawing::Point(12, 74);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(884, 447);
			this->label->TabIndex = 4;
			this->label->Text = L"������� ������������";
			this->label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(908, 578);
			this->Controls->Add(this->label);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"�����������";
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void button1_Click(System::Object ^ sender, System::EventArgs ^ e) {
			// ������ ����������� �������
			int n = 6;

			// ������� ��������� ������ � ��������� ��� ���������� �������
			int matrix[5][5];
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					matrix[i][j] = rand() % 10;
				}
			}

			// ������� ������� �� ����� � ������� ������ ����� ���� ������� ��������� � �������� ����� ���� ������� ���������
			int evenCount = 0;
			int oddCount = 0;
			String^ matrixString = "";
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					matrixString += matrix[i][j] + " ";

					if (i < j && matrix[i][j] % 2 == 0) { // ���� ������� ���� ������� ��������� � ������
						evenCount++;
					}
					else if (i > j && matrix[i][j] % 2 != 0) { // ���� ������� ���� ������� ��������� � ��������
						oddCount++;
					}
				}
				matrixString += "\n";
			}

			// ������� ����������
			label->Text = "�������:\n" + matrixString + "\n���������� ������ ��������� ��� ������� ����������: " + evenCount + "\n���������� �������� ��������� ��� ������� ����������: " + oddCount;
		}
};
}
