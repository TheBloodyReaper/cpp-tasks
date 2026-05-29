//
//_______________________________________________________________________________________________________________________________

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

bool is_in_square(double x, double y)
{
    if (-1 <= x && x <= 1 && -1 <= y && y <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() {
    double x, y;
    cin >> x >> y;
    if (is_in_square(x, y)){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}