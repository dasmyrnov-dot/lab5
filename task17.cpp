#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // x - задане число
    // n - верхня межа суми
    // S - результат обчислення
    double x, S = -1.0;
    int n;

    // Введення x та n
    cin >> x >> n;

    // Перевірка введених даних
    if (x < 0 || n < 0)
    {
        cout << "Pomylka!" << endl;
        return 0;
    }

    // Значення числа PI
    const double PI = 3.141592653589793;

    // Обчислюємо вираз у дужках
    double a = -PI / 2.0 + pow(x, 1.0 / 4.0);

    // Обчислення суми
    for (int k = 0; k <= n; k++)
    {
        // Обчислюємо факторіал (2k)!
        double factorial = 1;

        for (int j = 1; j <= 2 * k; j++)
        {
            factorial *= j;
        }

        // Визначаємо знак
        double sign = (k % 2 == 0) ? 1.0 : -1.0;

        // Обчислюємо черговий член суми
        double term = sign * pow(a, 2 * k) / factorial;

        S += term;
    }

    // Виведення результату
    cout << "S = " << S << endl;

    return 0;
}
