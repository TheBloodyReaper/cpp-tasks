//
//_______________________________________________________________________________________________________________________________

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int n, a;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 0)
        {
            cout << i << " ";
        }
    }
    
}