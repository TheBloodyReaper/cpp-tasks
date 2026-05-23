//
//_______________________________________________________________________________________________________________________________

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        string num;
        cin >> num;
        sum += num.length();
    }

    cout << sum << endl;
    return 0;
}