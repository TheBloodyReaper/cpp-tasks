// Дано предложение, оканчивающееся точкой. Требуется подсчитать количество букв в нём.
//_______________________________________________________________________________________________________________________________

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string sentence;
    getline(cin, sentence);
    int count = 0;

    for (int i = 0; i < sentence.length(); i++)
    {
        if (isalpha(sentence[i]))
        {
            count++;
        }
    }

    cout << count;

    return 0;
}