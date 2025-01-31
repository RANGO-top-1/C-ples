

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double x;
    double y;
    cout << "Введите x: ";
    cin >> x; 
    cout << "Введите y: ";
    cin >> y;
   
    double  d = x * pow(y, 2) - sqrt(pow(x, 2) - 2.5 * pow(10, -3) * y) / (2 * sin(x * y)) + 0.5;
    cout << endl << " Ответ " << d << endl ;

