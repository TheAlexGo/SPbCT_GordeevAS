#include <ctime>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <windows.h>
#include <locale.h>
#include "../MyDLL/MyDLL/MyDLL.h"

#pragma once

namespace work {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(253, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ФИО: Гордеев Александр Сергеевич";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Дата: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(138, 44);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Время: ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 135);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(253, 46);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Запустить!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(11, 80);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Статус: ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(275, 193);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void set_time() {
			// Установка текущий даты и времени
			struct tm* c_date;
			struct tm* c_time;
			char Current_date[50];
			char Current_time[50];
			const time_t timer = time(NULL);
			c_date = c_time = localtime(&timer);
			strftime(Current_date, 50, "%d.%m.%Y", c_date);
			strftime(Current_time, 50, "%H:%M:%S", c_time);
			System::String^ strDate = gcnew System::String(Current_date);
			System::String^ strTime = gcnew System::String(Current_time);
			label2->Text += strDate;
			label3->Text += strTime;
		}

		std::vector<char> create_mas() {
			std::ifstream f("output.txt"); // Осуществляется открытие файла
			char c;
			char final_mas[10][10] = {};
			int i = 0;
			int j = 0;
			while (i != 9 || j != 10) {
				f.get(c);
				if (c == '\n') {
					j = 0;
					i++;
					continue;
				}
				final_mas[i][j] = c;
				j++;
			}
			int flag = 9;
			for (int i = 0; i < 10; i++) {

				for (int j = 9; j >= 0; j--)
					if (j == flag)
						final_mas[i][j] = '*';
				flag--;
			}
			f.close(); // Закрытие файла
			std::remove("output.txt");

			std::vector<char> final;

			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 10; j++) {
					final.push_back(final_mas[i][j]);
					final.push_back(' ');
				}
				final.push_back('\n');
			}
			return final;
		}

#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		std::remove("output.txt");
		set_time();
		label4->Text = "Статус: Старт";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		setlocale(LC_ALL, "Russian");

		std::vector<char> vec1; // Объявление вектора
		std::vector <char> vec2; // Объявление вектора
		std::vector <char> vec3; // Объявление вектора
		std::vector <char> vec4; // Объявление вектора
		std::vector <char> vec5; // Объявление вектора
		std::vector <char> vec6; // Объявление вектора
		std::vector <char> vec7; // Объявление вектора
		std::vector <char> vec8; // Объявление вектора
		std::vector <char> vec9; // Объявление вектора
		std::vector <char> vec10; // Объявление вектора


		vec1 = MyDLL::zap_vector(0);
		vec2 = MyDLL::zap_vector(10);
		vec3 = MyDLL::zap_vector(20);
		vec4 = MyDLL::zap_vector(30);
		vec5 = MyDLL::zap_vector(40);
		vec6 = MyDLL::zap_vector(50);
		vec7 = MyDLL::zap_vector(60);
		vec8 = MyDLL::zap_vector(70);
		vec9 = MyDLL::zap_vector(80);
		vec10 = MyDLL::zap_vector(90);

		std::vector<char> final_vec = {};
		final_vec = create_mas();

		MyDLL::writeTo("output.txt", final_vec); // Вывод вектора в файл

		label4->Text = "Статус: Успешно!";
	}
};
}
