#include <iostream>
using namespace std;
//For greater Numbers Use long long datatype instead of int
long long fibonacci_fast(int n) {
    long long fib[n+2]; //One extra to handle the 0 inp
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<=n;i++)
    {
        fib[i]=(fib[i-1]%10+fib[i-2]%10)%10;
    }
    return fib[n];
}


int main() {
    int n = 0;
    cin >> n;
    cout << fibonacci_fast(n) << '\n';
    return 0;
}
