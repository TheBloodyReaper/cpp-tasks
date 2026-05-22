// Дан массив из n элементов. Вывести элементы массива, кратные k.
//_______________________________________________________________________________________________________________________________

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int n, a[100], k, summa = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % k == 0)
        {
            cout << a[i] << " ";
        }
    }
}