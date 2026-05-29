// Дан один символ A. Требуется определить, является он строчным, заглавным или числом.
//_______________________________________________________________________________________________________________________________

#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char A;
    cin >> A;

    if (isupper(A))
    {
        cout << "BIG";
    }

    if (islower(A))
    {
        cout << "TINY";
    }

    if (isdigit(A))
    {
        cout << "DIGIT";
    }

    return 0;
}