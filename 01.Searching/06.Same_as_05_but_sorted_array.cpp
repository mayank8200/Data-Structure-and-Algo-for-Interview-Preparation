/*
Given an sorted array A[] and a number x, check for pair in A[] with sum as x
Write a program that, given an array A[] of n numbers and another number x, determines whether or not there exist two elements in S whose sum is exactly x.
Examples:

Input: arr[] = {0, 1, 2, 3, 5}
        sum = 5
Output: 0 ,5
Explanation: If we calculate the sum,
0 + 5 = 5

Input: arr[] = {1, 2, 4, 8, 9}
       sum = 2
Output: -1
Explanation: No valid pair exists
*/
#include<iostream>
using namespace std;
bool checkSum(int a[],int sum,int n)
 {
     int l=0,r=n-1;
     while(l<r)
      {
          if(a[l]+a[r]==sum)
           {
               cout << "The numbers that add upto " << sum << " are " << a[l] << " and " << a[r] << endl;
               return true;
           }
           if(a[l]+a[r]>sum)
           {
               r=r-1;
           }
           else
            l=l+1;
      }
      return false;

 }
 int main()
 {
     int n,i,x,ret;
     cout << "Enter the size of Array:";
     cin >> n;
     int arr[n];
     cout << "Enter " << n << " Elements(sorted):";
     for(i=0;i<n;i++)
     {
         cin >> arr[i];
     }
     cout << "Enter the sum to check:";
     cin >> x;
     //Calling Function
     if(checkSum(arr,x,n))
      cout << "Sum is present";
    else
        cout << "Sum is not present";
    return 0;
 }