// Лабораторна робота №7 — Задача 2.7 (Lab 2.3.2: Finding the value of Pi)
// Студент: Костишен А. В. | Група: ІСТ-21
// Ел. пошта: st9763868@stud.duikt.edu.ua
#include <iostream>
using namespace std;

int main()
{
    double pi4 = 0.;
    long n;

    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Number of iterations? ";
    if (!(cin >> n)) {
        n = 10000;
        cout << n << endl;
    }

    for (long i = 0; i < n; i++) {
        if (i % 2 == 0) {
            pi4 += 1.0 / (2.0 * i + 1.0);
        } else {
            pi4 -= 1.0 / (2.0 * i + 1.0);
        }
    }

    cout.precision(20);
    cout << "Pi = " << (pi4 * 4.) << endl;
    return 0;
}
