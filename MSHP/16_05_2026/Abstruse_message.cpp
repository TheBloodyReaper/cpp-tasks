// Ваша задача – определить в предоставленном сообщении количество слов длиной больше, чем А.
//_______________________________________________________________________________________________________________________________

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int A, count = 0;
    string message;
    cin >> A;

    while (cin >> message)
    {
        if (message.length() > A)
        {
            count ++;
        }
    }

    cout << count;

    return 0;
}