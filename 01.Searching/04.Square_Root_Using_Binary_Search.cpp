/*
Square root of an integer
Given an integer x, find it’s square root. If x is not a perfect square, then return floor(√x).

Examples :

Input: x = 4
Output: 2
Explanation:  The square root of 4 is 2.

Input: x = 11
Output: 3
Explanation:  The square root of 11 lies in between
3 and 4 so floor of the square root is 3.
*/
#include<iostream>
using namespace std;
//Defining the funtion which find square root takes an argument 
int squareRoot(int x)
{
//If the number is 0 or 1 then the sqrt will be number itself
    if (x == 0 || x == 1) 
	    return x;
    int start=1,end=x;
    int mid,ans;
//Iterating until end is equal or greater than start
    while(start<=end)
    {
        mid = (start+end)/2;
        if(mid*mid==x)
            return mid;
        if(mid*mid>x)
            end=mid-1;   
//We are storing the value of mid here because if the while loop evaluates false we had to print floor. We can use start-1 instead of ans 
        else
        {
            start=mid+1;
            ans=mid; 
        }    
    }
    return ans;

}
int main()
{
    int x,ans;
    cout << "Enter the number to find square root:";
    cin >> x;
    ans=squareRoot(x);
    cout << "The square root of " << x << " is " << ans << endl;
    return 0;
}