// Измените функцию из предыдущей задачи, добавив точность сравнения как параметр функции, указав значение по умолчанию 0.01.
//_______________________________________________________________________________________________________________________________

#include <iostream>
#include <cmath>

using namespace std;

bool is_equal(double a, double b, double accuracy = 0.01)
{
    return fabs(a - b) < accuracy;
}

int main()
{
    double a, b, accuracy;
    cin >> a >> b >> accuracy;

    if (is_equal(a, b, accuracy))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}