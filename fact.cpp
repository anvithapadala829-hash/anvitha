#include <iostream>
using namespace std;

int main() {
    int m;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> m;

    if (m < 0) {
        cout << "Factorial is not defined for negative numbers.";
    } else {
        for (int i = 1; i <= m; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << m << " is " << factorial;
    }

    return 0;
}