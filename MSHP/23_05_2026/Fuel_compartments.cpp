//
//_______________________________________________________________________________________________________________________________

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int N, M, matrix[100][100], ind = -1;
    cin >> N >> M;
    long long min = 10000000000000000;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int j = 0; j < M; j++)
    {
        if (matrix[3][j] < min)
        {
            min = matrix[3][j];
            ind = j;
        }
    }

    cout << ind;
}