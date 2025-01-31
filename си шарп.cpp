

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	double x;
	double y;
	double b;
	double a;
	double z;
	cout << "Введите х:" << endl;
	cin >> x;
	cout << "Введите y:" << endl;
	cin >> y;
	cout << "Введите b:" << endl;
	cin >> b;
	cout << "Введите a:" << endl;
	cin >> a;
	if (x > 0 && y > 0) {
		double maxEl = a / x;
		if (maxEl < b / x) {
			maxEl = b / x;
		}
		if (maxEl < sqrt(y)); {
			maxEl = sqrt(y);
		}
		z = maxEl;
	}
	else if (x < 0 && y > 0) {
		double minEl = pow(a * x, 3);
			if (minEl > pow(b * y, 2)) {
				minEl = pow(b * y, 2);
			}
		z = minEl;
	}
	else {
		z = pow(2, x + y);
	};
	cout << "Ответ: " << z;


};


      


		


		








