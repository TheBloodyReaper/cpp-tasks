// На вход даётся число N. Выведите в файл output.txt пирамидку из символов высотой ровно N.
//_______________________________________________________________________________________________________________________________

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    ofstream fout("output.txt");

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            fout << char('A' + i);
        }

        fout << endl;
    }

    return 0;
}