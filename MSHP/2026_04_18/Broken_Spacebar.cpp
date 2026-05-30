// Напишите char changeSymbol(char symbol), которая поможет переработать данный текст и превратить все звездочки в пробелы.
//_______________________________________________________________________________________________________________________________

#include <iostream>

using namespace std;

char changeSymbol(char symbol)
{
    if (symbol == '*')
    {
        return ' ';
    }
    return symbol;
}

int main()
{
    char ch;

    while (cin.get(ch))
    {
        char new_ch = changeSymbol(ch);
        cout << new_ch;
    }

    return 0;
}