// Вводятся два целых числа N и M. Далее в N строках вводятся элементы двумерного массива. После вводятся числа A и B.
// Выведите сумму элементов на всех строках с номерами с A по B.
//_______________________________________________________________________________________________________________________________

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int N, M, matrix[100][100];
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> matrix[i][j];
        }
        
    }

    int A, B, summa = 0;
    cin >> A >> B;
    A--;
    B--;

    for (int i = A; i <= B; i++)
    {
        for (int j = 0; j < M; j++)
        {
            summa += matrix[i][j];
        }
        
    }

    cout << summa;
}