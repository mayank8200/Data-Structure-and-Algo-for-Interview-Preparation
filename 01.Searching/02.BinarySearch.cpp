#include<iostream>
using namespace std;
//Function to Implement Binary Search takes 4 arguments array, lowest index, hoghest index of array and the element to search
int BinarySearch(int a[],int l,int h,int x)
{
//Until the lower value index is les than higher value indes
if(l<=h)
{
 int mid;
 //Calculating the mid value of index
 mid = int((l+h)/2);
  if(a[mid]==x)
    return mid;
 if(a[mid]>x)
    return(BinarySearch(a,l,mid-1,x));
 if(a[mid]<x)
    return(BinarySearch(a,mid+1,h,x));
}
//If the element is not found in the array
return -1;
}
int main()
 {
     // Taking inputs
     int n,i,x,ret;
     cout << "Enter the size of Array:";
     cin >> n;
     int arr[n];
     cout << "Enter " << n << " Elements(in sorted order):";
     for(i=0;i<n;i++)
     {
         cin >> arr[i];
     }
     cout << "Enter the element to search:";
     cin >> x;
     //Calling Function
     ret = BinarySearch(arr,0,n-1,x);
     if(ret==-1)
     cout << "Element " << x <<" not found" << endl;
     else
     cout << "Element " << x << " found at index " << ret <<endl;
     return 0;
 }