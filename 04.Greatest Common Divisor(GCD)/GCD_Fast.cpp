#include <iostream>
using namespace std;
int gcd(int n1,int n2)
{
    if(n2==0)
        return n1;
    else
        return(gcd(n2,n1%n2));
}
int main()
{
    int n1,n2;
    cout << "Enter the two numbers to find gcd:";
    cin >> n1 >> n2;
    cout << gcd(n1,n2) << endl;
    return 0;
}