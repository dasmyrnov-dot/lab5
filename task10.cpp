#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // x - задане дійсне число
    // n - верхня межа суми
    // S - сума ряду
    double x, S = 0;
    int n;

    // Введення x та n
    cin >> x >> n;

    // Перевірка правильності введених даних
    if (abs(x) >= 4 || n < 0)
    {
        cout << "Pomylka!" << endl;
        return 0;
    }

    // Обчислення суми
    for (int i = 0; i <= n; i++)
    {
        S += pow(x, i + 2) / (pow(5.0, i) + i);
    }

    // Виведення результату
    cout << "S = " << S << endl;

    return 0;
}
