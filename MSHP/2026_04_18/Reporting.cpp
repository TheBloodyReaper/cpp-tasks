// Компания публикует финансовую отчётность, однако хочет скрыть реальные суммы и даты переводов.
// Напишите программу, которая считает данные из файла, заменит все цифры на x сохранит результат в выходной файл.
//_______________________________________________________________________________________________________________________________

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream fin("in.txt");
    ofstream fout("out.txt");

    string line;

    while (getline(fin, line))
    {
        for (int i = 0; i < line.length(); i++)
        {
            if (line[i] >= '0' && line[i] <= '9')
            {
                line[i] = 'x';
            }
        }
        fout << line << endl;
    }

    fin.close();
    fout.close();

    return 0;
}