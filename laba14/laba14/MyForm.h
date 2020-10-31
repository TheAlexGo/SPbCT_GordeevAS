#pragma once
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include <typeinfo>

namespace laba14 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>

	//public ref class ColTable {
	//public:
	//	int* mas = new int[100];
	//	int value_elements;
	//	String^ header;

	//	ColTable() {};
	//	ColTable(const string& name, int value, int* znach) {
	//		header = gcnew String(name.c_str());
	//		value_elements = value;
	//		for (int i = 0; i < value_elements; i++)
	//		{
	//			mas[i] = znach[i];
	//		}
	//	}

	//};

	//public class Table {
	//public:
	//	int value_cols;
	//	int mas[100];
	//};

	//public class TableSum : public Table {

	//};



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
	public: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	public: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(643, 30);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(294, 150);
			this->dataGridView1->TabIndex = 0;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(331, 30);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(294, 150);
			this->dataGridView2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(19, 238);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(441, 41);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Добавить столбец";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(19, 30);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(294, 150);
			this->dataGridView3->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Обычная таблица";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(328, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(214, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Таблица с автосуммированием";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(640, 7);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(164, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Таблица с сортировкой";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 213);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Имя столбца:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(119, 210);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(341, 22);
			this->textBox1->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(493, 213);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(172, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Элементы для столбцов:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(671, 210);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(266, 22);
			this->textBox2->TabIndex = 10;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(496, 238);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(441, 41);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Добавить строку";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(956, 301);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int* mas = new int[100];
		int value;
		String^ name;
		
		name = textBox1->Text;
		value = 10;

		for (int i = 0; i < value; i++) mas[i] = i;
		
		dataGridView1->Columns->Add("", name);
		dataGridView2->Columns->Add("", name);
		dataGridView3->Columns->Add("", name);

		int value_col;

		value_col = dataGridView1->ColumnCount;

		for (int i = 0; i < value_col; i++)
		{
			dataGridView1->Columns[i]->Width = 40;
			dataGridView2->Columns[i]->Width = 40;
			dataGridView3->Columns[i]->Width = 40;
		}

		Form::Update();

	}
	int num_row = 0;
	vector<string> split(const string& s, char delim) {
		vector<string> elems;
		stringstream ss;
		ss.str(s);
		string item;
		while (getline(ss, item, delim)) {
			elems.push_back(item);
		}
		return elems;
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int num_col = 0;
		String ^text_col;
		int two_num_col;
		
		two_num_col = dataGridView2->ColumnCount;
		text_col = textBox2->Text;
		string new_text_col = msclr::interop::marshal_as<string>(text_col);
		string s = new_text_col;
		vector<string> elems = split(s, ' ');

		dataGridView1->Rows->Add();
		dataGridView2->Rows->Add();
		dataGridView3->Rows->Add();

		for (int i = 0; i < elems.size(); i++) {
			String^ text = gcnew String(elems[i].c_str());
			if (text != "" && i != two_num_col - 1)
			{

				dataGridView1->Rows[num_row]->Cells[num_col]->Value = text;
				dataGridView2->Rows[num_row]->Cells[num_col]->Value = text;
				dataGridView3->Rows[num_row]->Cells[num_col]->Value = text;
				num_col++;
			}
			else if (i == (two_num_col - 1)) {
				int sum = 0;
				for (int j = 0; j < two_num_col-1; j++) {
					sum += stoi(elems[j]);
				}
				dataGridView1->Rows[num_row]->Cells[num_col]->Value = text;
				dataGridView2->Rows[num_row]->Cells[two_num_col - 1]->Value = Convert::ToString(sum);
				dataGridView3->Rows[num_row]->Cells[num_col]->Value = text;
				num_col++;
			}
		}

		num_row++;
		
	}
};
}
