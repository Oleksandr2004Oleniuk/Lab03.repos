// Lab_03_1.cpp
// < ������ ��������� >
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 0.8
/*
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������

	cout << "x = "; cin >> x;

	A = 2 + 6 * x;
	// ����� 1: ������������ � ��������� ����
	if (x <= 0)
		B = log(cos(x)) + pow(x, 5);
	if (x > 0 && x <= 3)
		B = (cos((1 + log(x)) / 3)) / (sin((1 + log(x)) / 3));
	if (x > 3)
		B = 12 * x - pow(x, 8);

	y = A + B;

	cout << endl;
	cout << "1) y = " << y << endl;

	// ����� 2: ������������ � ����� ����
	if (x <= 0)
		B = log(cos(x)) + pow(x, 5);
	else
		if (x > 3)
			B = 12 * x - pow(x, 8);
		else
			B = (cos((1 + log(x)) / 3)) / (sin((1 + log(x)) / 3));

	y = A + B;

	cout << "2) y = " << y << endl;

	cin.get();
	return 0;
}
*/
