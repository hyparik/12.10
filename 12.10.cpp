#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");

    cout << "Первое задание (6)"

    int x, y, result;

    cout << "Напишите число: ";
    cin >> x;
    result = x;
    cout << "\nНапишите степень: ";
    cin >> y;
    
    for (int i = 1; i < y; i++) {
        result *= x;
    }

    cout << x << " ^ " << y << " = " << result;

    cout << "Второе задание (14)"

    int q = 0, min = 9;
    cin >> q;
    for (int i = 0; i < q; i++) {
        if (min > q % 10) {
            min = q % 10;
        }
        q /= 10;
    }
    cout << min;
}

