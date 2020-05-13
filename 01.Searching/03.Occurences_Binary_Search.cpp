/*
Find first and last positions of an element in a sorted array
Given a sorted array with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in the given array.

Examples:

Input : arr[] = {1, 3, 5, 5, 5, 5 ,67, 123, 125}    
        x = 5
Output : First Occurrence = 2
         Last Occurrence = 5

Input : arr[] = {1, 3, 5, 5, 5, 5 ,7, 123 ,125 }    
        x = 7
Output : First Occurrence = 6
         Last Occurrence = 6

*/
#include<iostream>
using namespace std;
//Function to Implement Binary Search which finds first occurence takes 5 arguments array, lowest index, highest index,the element to search and size of array
int BinarySearchfirst(int a[],int l,int h,int x,int n)
{
//Until the lower value index is les than higher value indes
if(l<=h)
{
 int mid;
 //Calculating the mid value of index
 mid = int((l+h)/2);
 //if the value at index is smaller than it's previous index or the index is 0(first index)
  if(a[mid]==x && a[mid-1]<x || mid==0)
    return mid;
 if(a[mid]>=x)
    return(BinarySearchfirst(a,l,mid-1,x,n));
 if(a[mid]<x)
    return(BinarySearchfirst(a,mid+1,h,x,n));
}
//If the element is not found in the array
return -1;
}
//Function to Implement Binary Search which find last occurence takes 5 arguments array, lowest index, highest index,the element to search and size of array
int BinarySearchlast(int a[],int l,int h,int x,int n)
{
//Until the lower value index is les than higher value indes
if(l<=h)
{
 int mid;
 //Calculating the mid value of index
 mid = int((l+h)/2);
  //if the value at index is smaller than it's next index or the index is n-1(last index)
  if(a[mid]==x && a[mid+1]>x || mid==n-1)
    return mid;
 if(a[mid]>x)
    return(BinarySearchlast(a,l,mid-1,x,n));
 if(a[mid]<=x)
    return(BinarySearchlast(a,mid+1,h,x,n));
}
//If the element is not found in the array
return -1;
}
int main()
 {
     // Taking inputs
     int n,i,x,ret,ret1;
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
     ret = BinarySearchfirst(arr,0,n-1,x,n);
     ret1 = BinarySearchlast(arr,0,n-1,x,n);
     if(ret==-1)
        cout << "Element " << x <<" not found" << endl;
     else
        cout << "Element " << x << " found first occurence at " << ret <<endl;
     if(ret1==-1)
        cout << "Element " << x <<" not found" << endl;
     else
        cout << "Element " << x << " found last occurence at " << ret1 <<endl;
     return 0;
 }