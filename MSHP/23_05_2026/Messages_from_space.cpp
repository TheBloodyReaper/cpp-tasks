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
        if (s[i] == ' ')
        {
            summa ++;
        }
        
    }

    cout << summa + 1;

    return 0;
}