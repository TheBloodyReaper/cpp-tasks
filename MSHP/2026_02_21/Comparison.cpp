// Напишите функцию сравнения двух целых чисел bool is_equal(int a, int b).
// Как результат функция должна возвращать true, если числа равны, и false в ином случае.
//_______________________________________________________________________________________________________________________________

#include <iostream>

using namespace std;

bool is_equal(int a, int b)
{
    if (a == b)
    {
        return true;
    }
    return false;
}

int main()
{
    int a, b;
    cin >> a >> b;
    if (is_equal(a, b))
        cout << "YES";
    else
        cout << "NO";
}