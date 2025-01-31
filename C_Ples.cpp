

#include <iostream>
#include <cmath>
using namespace std;


double mediana(double x1, double x2, double x3, double y1, double y2, double y3) {

	return 1 / 2 * (x1 - x2) * (y3 - y1) - (x3 - x1) * (y2 - y1);
};

int main()
{
	setlocale(LC_ALL, "Russian");
	double A1;
	double A2;
	double A3;
	double A4;
	double A5;
	double A6;
	cout << "Введите A1:" << endl;
	cin >> A1;
	cout << "Введите A2:" << endl;
	cin >> A2;
	cout << "Введите A3:" << endl;
	cin >> A3;
	cout << "Введите A4:" << endl;
	cin >> A4;
	cout << "Введите A5:" << endl;
	cin >> A5;
	cout << "Введите A6:" << endl;
	cin >> A6;
	double abc;
	double r1 = mediana(A1, A2, A3, A4, A5, A6);
	cout << "Ответ:" << +r1;
}





