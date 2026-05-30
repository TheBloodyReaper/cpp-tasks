// Замените все строчные буквы из файла input.txt на заглавные и наоборот и перепишите все в новый файл output.txt
//_______________________________________________________________________________________________________________________________

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    string line;

    while (getline(fin, line))
    {
        for (int i = 0; i < line.length(); i++)
        {
            if (line[i] >= 'a' && line[i] <= 'z')
            {
                line[i] = line[i] - 32;
            }
            else if (line[i] >= 'A' && line[i] <= 'Z')
            {
                line[i] = line[i] + 32;
            }
        }
        fout << line << endl;
    }

    fin.close();
    fout.close();

    return 0;
}