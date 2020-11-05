#include <iostream>
#include "../../laba20DLL/laba20DLL/MathFuncsDll.h"
#include <locale.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int d1 = 5;
	int d2 = 10;
	cout << "Периметр: " <<
		MathFuncs::MyMathFuncs::Perimetr(d1, d2) << endl;
	cout << "Площадь: " <<
		MathFuncs::MyMathFuncs::Ploshad(d1, d2) << endl;
	return 0;
}