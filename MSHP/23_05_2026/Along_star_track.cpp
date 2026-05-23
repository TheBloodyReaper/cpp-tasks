//
//_______________________________________________________________________________________________________________________________

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    long long max = -1000000000000000000;

    for (int i = 0; i < N * M; i++)
    {
        long long int num;
        cin >> num;

        if (num % 3 != 0 && num > max)
        {
            max = num;
        }
    }

    cout << max;

    return 0;
}