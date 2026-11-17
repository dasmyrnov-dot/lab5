#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // S - сума ряду
    // term - поточний член ряду
    // n - номер члена ряду
    long double S, term;
    int n = 1;

    // Точність обчислення
    const long double EPS = 1e-12L;

    // Перший член ряду
    term = 1.0L / 7.0L;
    S = term;

    // Обчислення суми ряду
    while (term > EPS)
    {
        n++;

        // Знаходимо наступний член ряду
        term = term * n / (5 * n + 2);

        // Додаємо його до загальної суми
        S += term;
    }

    // Виведення результату
    cout << fixed << setprecision(12);
    cout << "S = " << S << endl;

    return 0;
}
