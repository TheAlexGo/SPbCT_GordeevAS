#include "pch.h"
#include "MyDLL.h"
#include <stdexcept>
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

void MyDLL::writeTo(const std::string& filepath, const  std::vector<char>& data)
{ // ������� ������ ������� � ����
	std::ofstream filestream(filepath, std::ios::app); // �������� �����
	copy(data.begin(), data.end(), std::ostream_iterator<char>(filestream, "")); // ������ � ���� 
	filestream.close(); // �������� �����
}

void MyDLL::writeTo1(const std::string& filepath, const  std::vector<char>& data)
{
	std::ofstream filestream(filepath, std::ios::app); // �������� �����
	filestream << "\n"; // ������� �� ����� ������
	filestream.close(); // �������� �����
}

std::vector<char> MyDLL::zap_vector(int value) { // ���������� �������
	std::vector<char> kit; // ����������� ���������������� �������
	std::ifstream is("input.txt"); // �������� ����� 
	is.seekg(value, std::ios::beg); // �������� ��������� ������� �������
	char c; // ���������� ������� - char
	int i = 0; // �������
	while (is.get(c) && i < 10) { 
		i++;
		kit.push_back(c); // ���������� �������
	}
	is.close(); // �������� �����
	sort(kit.begin(), kit.end()); // ���������� ������� �� �������� (�� �����������)
	MyDLL::writeTo("output.txt", kit); // ������ � ����
	MyDLL::writeTo1("output.txt", kit); // ���������� �������
	return kit; // ����� �������
}