// Напишите функцию сравнения двух вещественных чисел bool is_equal(double a, double b).
// Как результат функция должна возвращать true, если числа равны, и false в ином случае.
// Сравнивать вещественные числа необходимо с точностью до сотыx.
//_______________________________________________________________________________________________________________________________

#include <iostream>
#include <cmath>

using namespace std;

bool is_equal(double a, double b)
{
    return fabs(a - b) < 0.01;
}

int main()
{
    double a, b;
    cin >> a >> b;

    if (is_equal(a, b))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}