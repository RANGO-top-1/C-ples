

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a [] = {2, 26, 1, 6, 5, 10, 11, 9, 29};
    vector <int> result;
    int primi = a[0];
    result.push_back(primi);

	for (int i = 0; i < 10; i++) {
        if (primi < a[i]) {
            primi = a[i];
            result.push_back(primi);
        }
        else (primi < a[i]); {
            continue;
		}
	}
    for (int end : result) {
        cout << end << " ";
    }
}