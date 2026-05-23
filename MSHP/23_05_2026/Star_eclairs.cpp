//
//_______________________________________________________________________________________________________________________________

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int N, num;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> num;
        for (int j = 1; j <= num; j++)
        {
            if (num % j == 0)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    
}