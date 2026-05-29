// Тебе дан пароль пользователя. Проверь его на надежность.
// Если он содержит цифры, большие и маленькие буквы, пробелы, выведи "YES". Иначе выведи "NO".
//_______________________________________________________________________________________________________________________________

#include <iostream>
#include <string>
#include <cctype>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    string password;
    getline(fin, password);

    bool digit = false;
    bool upper = false;
    bool lower = false;
    bool space = false;

    for (int i = 0; i < password.length(); i++)
    {
        if (isdigit(password[i]))
            digit = true;
        else if (isupper(password[i]))
            upper = true;
        else if (islower(password[i]))
            lower = true;
        else if (password[i] == ' ')
            space = true;
    }

    if (digit && upper && lower && space)
    {
        fout << "YES";
    }
    else
    {
        fout << "NO";
    }

    fin.close();
    fout.close();

    return 0;
}