#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    char station;
    cout << "Введите букву станции (A, B, C, D, E): ";
    cin >> station;
    switch (station) {
    case 'a':
    case 'A':
        cout << "Время в пути до станции A: 10 минут\n";
        break;
    case 'b':
    case 'B':
        cout << "Время в пути до станции B: 20 минут\n";
        break;
    case 'c':
    case 'C':
        cout << "Время в пути до станции C: 30 минут\n";
        break;
    case 'd':
    case 'D':
        cout << "Время в пути до станции D: 40 минут\n";
        break;
    case 'e':
    case 'E':
        cout << "Время в пути до станции E: 50 минут\n";
        break;
    }
    return 0;
}
