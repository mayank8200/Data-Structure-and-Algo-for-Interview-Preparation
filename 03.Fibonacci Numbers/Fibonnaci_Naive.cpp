#include <iostream>
using namespace std;
int fibonacci_naive(int n) {
    if (n <= 1)
        return n;

    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}

int main() {
    int n = 0;
    cin >> n;

    cout << fibonacci_naive(n) << '\n';
    return 0;
}
