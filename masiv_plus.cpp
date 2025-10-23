#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int arr[] = { 9, 5, 97, 9, 2, -6, 4, -5, 68, 68, 1 };
    
    int start = 0;
    int end = 0;

    int arrMin = arr[0];

    for (int i = 1; i < arr[0]; i++) {
        if (arr[i] < arrMin) {
            start = i;
            arrMin = arr[i];
        }
    }

    int arrMax = arr[0];

    for (int i = 1; i < arr[0]; i++) {
        if (arr[i] > arrMax) {
            end = i;
            arrMax = arr[i];
        }
    }

    if (start > end) {
        int c = start;
        start = end;
        end = c;
    }

    int sum = 0;
    for (int i = start + 1; i < end; i++) {
        sum += arr[i];
    }


    cout << "Min:" << arrMin << endl;
    cout << "Max:" << arrMax << endl;
    cout << "Масив:  {9, 5, 97, 9, 2, -6, 4, -5, 68, 68, 1}" <<  endl;
    cout << "Сумма:" << sum << endl;
}


















