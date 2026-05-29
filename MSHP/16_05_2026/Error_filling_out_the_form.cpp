// Дана строка – это то, что ввёл клиент в поле "номер телефона", когда оставлял отзыв.
// Ваша задача проверить, правильно ли введен номер.
// Верный номер – это 11 цифр или 11 цифр и + перед ними.
// Если телефон введен верно, то выведите на экран "Correct",
// а если введенная строка не соответствует формату номера телефона, то выведите на экран "Incorrect".
//_______________________________________________________________________________________________________________________________

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string number;
    cin >> number;

    if (number[0] == '+')
        number = number.substr(1);

    if (number.length() != 11)
    {
        cout << "Incorrect";
        return 0;
    }

    bool all_digits = true;

    for (int i = 0; i < number.length(); i++)
    {
        if (!isdigit(number[i]))
        {
            all_digits = false;
            break;
        }
    }

    if (all_digits)
        cout << "Correct";
    else
        cout << "Correct";

    return 0;
}