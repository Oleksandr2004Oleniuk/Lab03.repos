// Lab_03_3.cpp
// < ������ ��������� >
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 0.8
/*
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ��������� ���������� ������

	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;

	// ������������ � ����� ����
	if (x <= -8 - R)
		y = -R;
	else
		if (x > -8 - R && x <= -8 + R)
			y = -R + sqrt(pow(R, 2) - pow(x + 8, 2));
		else
			if (x > -8 + R && x <= 2)
				y = 2+(-R-2)*(x-2)/(R-10);
			else
				if (x > 2 && x <= 6)
					y = 0;
				else
					y = pow(x - 6, 2);

	cout << endl;
	cout << "y = " << y << endl;

	cin.get();
	return 0;
}
*/