// 
//_______________________________________________________________________________________________________________________________

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int summa = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.' || s[i] == ',' || s[i] == '@' || s[i] == '&' || s[i] == ';' || s[i] == ':' || s[i] == '!' || s[i] == '#' || s[i] == '?')
        {
            summa ++;
        }
    }
    
    cout << summa;

    return 0;
}