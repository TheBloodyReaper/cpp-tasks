//
//_______________________________________________________________________________________________________________________________

#include <iostream>

using namespace std;

int delta_sum(int a, int b)
{
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    
    return a + b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << delta_sum(a, b);
    return 0;
}