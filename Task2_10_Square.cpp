// Лабораторна робота №7 — Задача 2.10 (Lab 2.3.5: Drawing squares)
// Студент: Костишен А. В. | Група: ІСТ-21
// Ел. пошта: st9763868@stud.duikt.edu.ua
#include <iostream>
using namespace std;

int main()
{
    int n;
    const int MAX_SIZE = 50;

    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Enter side size (2.." << MAX_SIZE << "): ";
    if (!(cin >> n)) {
        n = 8;
        cout << n << endl;
    }

    if (n <= 1) {
        cout << "Sorry, the side size is too small (must be > 1)" << endl;
        return 1;
    }
    if (n > MAX_SIZE) {
        cout << "Sorry, the side size is too big" << endl;
        return 1;
    }

    cout << '+';
    for (int i = 0; i < n - 2; i++)
        cout << '-';
    cout << '+' << endl;

    for (int i = 0; i < n - 2; i++) {
        cout << '|';
        for (int j = 0; j < n - 2; j++)
            cout << ' ';
        cout << '|' << endl;
    }

    cout << '+';
    for (int i = 0; i < n - 2; i++)
        cout << '-';
    cout << '+' << endl;

    return 0;
}
