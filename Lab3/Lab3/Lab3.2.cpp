// Lab_03_2.cpp
// < Оленюк Олександр >
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 0.8
/*
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; //вхідний аргумент
	double a; //вхідний аргумент
	double c; //вхідний аргумент
	double F; //результат обчислення виразу

	cout << "x = "; cin >> x;
	cout << "a = "; cin >> a;
	cout << "c = "; cin >> c;

	// спосіб 1: розгалуження в скороченій формі
	if (c < 0 && a != 0)
		F = -a * x * x;
	if (c > 0 && a == 0)
		F = (a - x) / (c * x);
	if (!(c < 0 && a != 0) && !(c > 0 && a == 0))
		F = x / c;

	cout << endl;
	cout << "1) F = " << F << endl;

	// спосіб 2: розгалуження в повній формі
	if (c < 0 && a != 0)
		F = -a * pow(x, 2);
	else
		if (c > 0 && a == 0)
			F = (a - x) / (c * x);
		else
			F = x / c;

	cout << "2) F = " << F << endl;

	cin.get();
	return 0;
}
*/