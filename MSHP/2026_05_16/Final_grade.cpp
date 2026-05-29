// Напишите функцию int final_grade(double mean), которая вычислит итоговую оценку ученика по информатике по его среднему баллу.
// Оценка выставляется в соответствии со следующим правилом:
// если средний балл ≥ 3.5, оценка округляется вверх до ближайшего целого, иначе округление идет вниз до ближайшего целого.
//_______________________________________________________________________________________________________________________________


#include <iostream>
#include <fstream>
#include <cmath>
    
using namespace std;

int final_grade(double mean)
{
    if (mean >= 3.5)
    {
        return ceil(mean);
    }
    else
    {
        return floor(mean);
    }
    
}

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    double mean;
    fin >> mean;

    fout << final_grade(mean);

    fin.close();
    fout.close();
    return 0;
}