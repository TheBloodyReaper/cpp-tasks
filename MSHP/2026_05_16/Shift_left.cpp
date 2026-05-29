// Дан массив a из n элементов. Перенесите s-й элемент массива на место k-го элемента (s<k).
// При этом s-й, (s+1)-й, ... , k-й элементы сдвинуть влево на 1 позицию.
//_______________________________________________________________________________________________________________________________

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int n, a[100], s, k, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> s >> k;
    
    temp = a[s];
    for (int i = s; i < k; i++)
    {
        a[i] = a[i + 1];
    }
    a[k] = temp;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}