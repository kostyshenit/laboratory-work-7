// Лабораторна робота №7 — Задача 2.6 (Lab 2.3.1: Collatz's hypothesis)
// Студент: Костишен А. В. | Група: ІСТ-21
// Ел. пошта: st9763868@stud.duikt.edu.ua
#include <iostream>
using namespace std;

int main()
{
    long long c0;
    int steps = 0;

    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Enter a positive integer c0: ";
    if (!(cin >> c0)) {
        c0 = 15;
        cout << c0 << endl;
    }

    if (c0 <= 0) {
        cout << "Error: c0 must be greater than 0." << endl;
        return 1;
    }

    while (c0 != 1) {
        if (c0 % 2 == 0) {
            c0 = c0 / 2;
        } else {
            c0 = 3 * c0 + 1;
        }
        cout << c0 << endl;
        steps++;
    }

    cout << "steps = " << steps << endl;
    return 0;
}
