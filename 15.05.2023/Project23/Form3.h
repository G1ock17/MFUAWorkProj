#pragma once
#include <iostream>                                    // для оператора cout
#include <cmath>                                       // для функции sin
#include <fstream>
#include <string>
#include <vector>
#include <Windows.h>

#define PI 3.14159265
namespace Project23 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
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
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Button^ button2;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 345);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(173, 59);
			this->button1->TabIndex = 12;
			this->button1->Text = L"записать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->richTextBox1->Location = System::Drawing::Point(12, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->richTextBox1->Size = System::Drawing::Size(135, 120);
			this->richTextBox1->TabIndex = 10;
			this->richTextBox1->Text = L"x";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(12, 182);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(365, 110);
			this->label1->TabIndex = 9;
			this->label1->Text = L"вычисление";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->richTextBox2->Location = System::Drawing::Point(242, 12);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->richTextBox2->Size = System::Drawing::Size(135, 120);
			this->richTextBox2->TabIndex = 13;
			this->richTextBox2->Text = L"y";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(206, 345);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(171, 59);
			this->button2->TabIndex = 14;
			this->button2->Text = L"расчитать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form3::button2_Click);
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(393, 419);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Form3";
			this->Text = L"window";
			this->ResumeLayout(false);

		}
#pragma endregion
	double DistanceToOrigin(double x, double y)
	{
		return std::sqrt(x * x + y * y);
	}

	double FindMaxDistance(const std::vector<std::pair<double, double>>& points)
	{
		double maxDistance = 0.0;

		for (const auto& point : points)
		{
			double distance = DistanceToOrigin(point.first, point.second);
			maxDistance = std::fmax(maxDistance, distance);
		}

		return maxDistance;
	}

	void WriteCoordinatesToFile(const std::vector<std::pair<double, double>>& coordinates, const std::string& filename)
	{
		std::ofstream file(filename, std::ios::app); // Открываем файл в режиме добавления (append mode)
		if (file.is_open())
		{
			for (const auto& coordinate : coordinates)
			{
				file << coordinate.first << ";" << coordinate.second << std::endl;
			}
			file.close();
			MessageBox::Show("Координаты успешно добавлены в файл.", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
		{
			MessageBox::Show("Не удалось открыть файл для записи.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ xText = richTextBox1->Text;
		System::String^ yText = richTextBox2->Text;
		int x = System::Convert::ToInt32(xText);
		int y = System::Convert::ToInt32(yText);
		std::vector<std::pair<double, double>> coordinates = { {x, y} }; // Исправлен тип данных
		WriteCoordinatesToFile(coordinates, "coordinates.txt");
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		std::ifstream file("coordinates.txt"); // Исправляем использование std::ifstream
		if (!file.is_open())
		{
			label1->Text = "Не удалось открыть файл.";
		}

		std::vector<std::pair<double, double>> points;

		std::string line;
		while (std::getline(file, line))
		{
			size_t delimiterPos = line.find(';');
			if (delimiterPos != std::string::npos)
			{
				double x = std::stod(line.substr(0, delimiterPos));
				double y = std::stod(line.substr(delimiterPos + 1));
				points.emplace_back(x, y);
			}
		}

		file.close();

		if (!points.empty())
		{
			double maxDistance = FindMaxDistance(points);
			String^ maxDistanceStr = maxDistance.ToString();
			label1->Text = "Наибольшее расстояние от начала координат: " + maxDistanceStr;
		}
		else
		{
			label1->Text = "Множество точек пусто.";
		}
	}
};
}
