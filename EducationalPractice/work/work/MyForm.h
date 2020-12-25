#include <ctime>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <windows.h>
#include <thread>
#include <cstdlib>
#include <locale.h>
#include <stdio.h>
#include "../Dll1/MyDLL.h"

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
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;


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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
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
			this->button1->Location = System::Drawing::Point(67, 329);
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
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(11, 112);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 17);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Исходные данные: ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 142);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 17);
			this->label6->TabIndex = 6;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(250, 112);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(133, 17);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Результат работы:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(250, 142);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(46, 17);
			this->label8->TabIndex = 8;
			this->label8->Text = L"label8";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(438, 413);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
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
			struct tm* c_date; // Объявление переменной даты
			struct tm* c_time; // Объявление переменной времени
			char Current_date[50]; // Выделение памяти для сегодняшней даты
			char Current_time[50]; // Выделение памяти для сегодняшнего времени
			const time_t timer = time(NULL); // Объявление таймера
			c_date = c_time = localtime(&timer); // Получение настоящего времени
			strftime(Current_date, 50, "%d.%m.%Y", c_date); // Заполнение даты
			strftime(Current_time, 50, "%H:%M:%S", c_time); // Заполнение времени
			System::String^ strDate = gcnew System::String(Current_date); // Конвертация даты в строку
			System::String^ strTime = gcnew System::String(Current_time); // Конвертация времени в строку
			label2->Text += strDate; // Вывод даты
			label3->Text += strTime; // Вывод времени
		}

		std::vector<char> create_mas() {
			// Функция создания массива
			std::ifstream f("output.txt"); // Открытие файла
			char c; // Переменная символов - char
			char final_mas[10][10] = {}; // Выделение памяти для двумерного массива и удаление мусора
			int i = 0; // Строки
			int j = 0; // Колонны
			// Заполнение массива
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
			// Конец заполнения массива

			// Замена диагонали на звёздочки
			int flag = 9; // Флаг для получения обратной диагонали
			for (int i = 0; i < 10; i++) {
				for (int j = 9; j >= 0; j--)
					if (j == flag)
						final_mas[i][j] = '*'; // Замена диагонали на звёздочки
				flag--; // Уменьшение значения флага
			}
			f.close(); // Закрытие файла
			remove("output.txt");
			std::vector<char> final; // Объявление финального ветора


			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 10; j++) {
					label8->Text += (Char)final_mas[i][j]; // Вывод результата
					label8->Text += " ";
					final.push_back(final_mas[i][j]); // Заполнение финального вектора
					final.push_back(' ');
				}
				label8->Text += (Char)'\n'; // Перенос на новую строку в программе
				final.push_back('\n'); // Перенос на новую строку в файле
			}
			return final; // Возвращение финального вектора
		}
		void del_file() { // Функция для потока
			remove("output.txt"); // Удаление файла 
		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// Выполняется при первой загрузке формы
		setlocale(LC_ALL, "Russian"); // Объявление поддержки русского языка
		SetFileAttributes(L"input.txt", FILE_ATTRIBUTE_READONLY); // Устанавливает для файла атрибут: "Только для чтения"
		set_time();
		remove("output.txt"); // Удаление файла, если он есть
		label4->Text = "Статус: Старт"; // Установка статуса начала
		label6->Text = ""; // Очистка лейбла
		label8->Text = ""; // Очистка лейбла
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//std::thread del(del_file); // Вызов потока
		label6->Text = ""; // Очистка лейбла
		label8->Text = ""; // Очистка лейбла
		char c; // Переменная символов - char
		int i = 0; // Столбцы

		// Вывод исходных данных
		std::ifstream f("input.txt"); // Открытие файла
		while (f.get(c)) {
			if (i == 10) {
				label6->Text += (Char)'\n';
				label6->Text += (Char)c;
				label6->Text += " ";
				i = 1;
			}
			else {
				label6->Text += (Char)c;
				label6->Text += " ";
				i++;
			}
			
		}
		f.close(); // Закрытие файла


		std::vector <char> vec1; // Объявление вектора
		std::vector <char> vec2; // Объявление вектора
		std::vector <char> vec3; // Объявление вектора
		std::vector <char> vec4; // Объявление вектора
		std::vector <char> vec5; // Объявление вектора
		std::vector <char> vec6; // Объявление вектора
		std::vector <char> vec7; // Объявление вектора
		std::vector <char> vec8; // Объявление вектора
		std::vector <char> vec9; // Объявление вектора
		std::vector <char> vec10; // Объявление вектора


		vec1 = MyDLL::zap_vector(0); // Заполнение вектора
		vec2 = MyDLL::zap_vector(10); // Заполнение вектора
		vec3 = MyDLL::zap_vector(20); // Заполнение вектора
		vec4 = MyDLL::zap_vector(30); // Заполнение вектора
		vec5 = MyDLL::zap_vector(40); // Заполнение вектора
		vec6 = MyDLL::zap_vector(50); // Заполнение вектора
		vec7 = MyDLL::zap_vector(60); // Заполнение вектора
		vec8 = MyDLL::zap_vector(70); // Заполнение вектора
		vec9 = MyDLL::zap_vector(80); // Заполнение вектора
		vec10 = MyDLL::zap_vector(90); // Заполнение вектора

		std::vector<char> final_vec = {}; // Объявление финального массива и очистка от мусора
		final_vec = create_mas(); // Заполнение финального массива


		MyDLL::writeTo("output.txt", final_vec); // Вывод вектора в файл
		SetFileAttributes(L"output.txt", FILE_ATTRIBUTE_READONLY); // Установка атрбитука "Только для чтения"
		label4->Text = "Статус: Успешно!"; // Установка статуса "Успешно!"


		
	}
};
}
