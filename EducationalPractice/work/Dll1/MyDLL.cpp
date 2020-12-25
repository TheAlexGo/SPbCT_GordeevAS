#include "pch.h"
#include "MyDLL.h"
#include <stdexcept>
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

void MyDLL::writeTo(const std::string& filepath, const  std::vector<char>& data)
{ // Функция записи вектора в файл
	std::ofstream filestream(filepath, std::ios::app); // Открытие файла
	copy(data.begin(), data.end(), std::ostream_iterator<char>(filestream, "")); // Запись в файл 
	filestream.close(); // Закрытие файла
}

void MyDLL::writeTo1(const std::string& filepath, const  std::vector<char>& data)
{
	std::ofstream filestream(filepath, std::ios::app); // Открытие файла
	filestream << "\n"; // Перенос на новую строку
	filestream.close(); // Закрытие файла
}

std::vector<char> MyDLL::zap_vector(int value) { // Заполнение вектора
	std::vector<char> kit; // Объяевлеине вспомогательного вектора
	std::ifstream is("input.txt"); // Открытие файла 
	is.seekg(value, std::ios::beg); // Проверка начальной позиции отсчёта
	char c; // Переменная символа - char
	int i = 0; // Столбцы
	while (is.get(c) && i < 10) { 
		i++;
		kit.push_back(c); // Заполнение вектора
	}
	is.close(); // Закрытие файла
	sort(kit.begin(), kit.end()); // Сортировка вектора по алфавиту (по возрастанию)
	MyDLL::writeTo("output.txt", kit); // Запись в файл
	MyDLL::writeTo1("output.txt", kit); // Добавление отступа
	return kit; // Вывод вектора
}