//
//_______________________________________________________________________________________________________________________________

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int n, arr[100];
    long long int sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    if (sum > 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}