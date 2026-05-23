// Напиши программу, которая выводит "Millionaire", если суммарный заработок за n месяцев не меньше одного миллиона,
// а иначе выводит сумму, которой не хватило до миллиона
//_______________________________________________________________________________________________________________________________

#include <iostream>

using namespace std;

int main()
{
    int N, money_in_mounth, money_summa = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> money_in_mounth;
        money_summa += money_in_mounth;
    }

    if (money_summa >= 1000000)
    {
        cout << "Millionaire";
    }
    else
    {
        cout << (1000000 - money_summa);
    }

    return 0;
}