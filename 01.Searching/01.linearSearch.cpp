#include<iostream>
using namespace std;
//Function to Implement Linear Search takes 3 arguments array, size of array and the element to search
int LinearSearch(int a[],int n,int x)
{
    int i,ind=-1;
//Performing bruteforce to find the element in the array
    for(i=0;i<n;i++)
    {
      //If we find the element in the array we are returning the index
        if(a[i]==x)
        return i;
    }
      //If we didn't find the element in the array we are returning -1
    return ind;
}
int main()
 {
     // Taking inputs
     int n,i,x,ret;
     cout << "Enter the size of Array:";
     cin >> n;
     int arr[n];
     cout << "Enter " << n << " Elements:";
     for(i=0;i<n;i++)
     {
         cin >> arr[i];
     }
     cout << "Enter the element to search:";
     cin >> x;
     //Calling Function
     ret = LinearSearch(arr,n,x);
     if(ret==-1)
     cout << "Element " << x <<" not found" << endl;
     else
     cout << "Element " << x << " found at index " << ret <<endl;
     return 0;
 }