// Lab_03_4.cpp
// < Оленюк Олександр >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 0.8
/*
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double y;
	double R;

	cout << "x = "; cin >> x; //вхідний параметр
	cout << "y = "; cin >> y; //вхідний параметр
	cout << "R = "; cin >> R; //вхідний аргумент

	// розгалуження в повній формі
	if((y<=R && y>=0 && y>=-x && x>=-R && x<=0) ||
		(y<=-R && y<0 && y<=x && x >= -R && x <= 0) ||
		(y>-R && y<R && (y<=sqrt(pow(R,2)-pow(x, 2)) || y >= -sqrt(pow(R, 2) - pow(x, 2))) && x>0 && x<=R))

			cout << "yes" << endl;
	else
			cout << "no" << endl;
	cin.get();
	return 0;
}
*/