// С клавиатуры вводится одно целое число в диапазоне от 1 до 3:
// если вводится 1, то далее вводятся два целых числа – значения, которые необходимо сравнить;
// если вводится 2, то далее вводятся два вещественных числа – значения, которые необходимо сравнить;
// если вводится 3, то далее вводятся три вещественных числа – значения, которые необходимо сравнить, и точность сравнения.
//_______________________________________________________________________________________________________________________________

#include <iostream>
#include <cmath>

using namespace std;

bool is_equal(int a, int b)
{
    if (a == b)
    {
        return true;
    }
    return false;
}

bool is_equal(double a, double b, double accuracy = 0.01)
{
    return fabs(a - b) < accuracy;
}

int main()
{
    int choice;
    cin >> choice;

    if (choice == 1)
    {
        int a, b;
        cin >> a >> b;

        if (is_equal(a, b))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }

    else if (choice == 2)
    {
        double a, b;
        cin >> a >> b;

        if (is_equal(a, b))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }

    else if (choice == 3)
    {
        double a, b, accuracy;
        cin >> a >> b >> accuracy;

        if (is_equal(a, b, accuracy))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    
    return 0;
}