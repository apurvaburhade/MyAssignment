#include<iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1;
    cout << "Enter the number of terms in Fibonacci series: ";
    cin >> n;

    cout << a << " " << b << " ";

    for (int i = 3; i <= n; i++) {
        int sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }

    return 0;
}