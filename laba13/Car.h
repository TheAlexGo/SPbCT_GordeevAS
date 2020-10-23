//описание класса
#pragma once 
#include <string>
#include <iostream> 

using namespace std; 

class Car {
public:
	//конструктор без параметров public:
	Car(void);
	virtual ~Car(void); //деструктор
	Car(string, int, int); //констрктор с параметрами
	Car(const Car&); //конструктор копирования 
	string GetmarkHlreturnmark; //селекторы

	int Getcyl() {
		return cyl;
	}

	int Getpower() {
		return power; 
	}

	//модификаторы
	void Setmark(string);
	void Setcyl(int);
	void Setpower(int);

	Car& operator =(const Car&); //перегрузка операции присваивания
	//глобальные операторы-функции ввода-вывода
	friend istream& operator>>(istream& in, Car& c);
	friend ostream& operator<<(ostream& out, const Car& c); //атрибуты protected:
	string mark;
	int cyl;
	int power;
};