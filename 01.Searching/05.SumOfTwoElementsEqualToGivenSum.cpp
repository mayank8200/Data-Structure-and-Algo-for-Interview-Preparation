/*
Given an array A[] and a number x, check for pair in A[] with sum as x
Write a program that, given an array A[] of n numbers and another number x, determines whether or not there exist two elements in S whose sum is exactly x.
Examples:

Input: arr[] = {0, -1, 2, -3, 1}
        sum = -2
Output: -3 ,1
Explanation: If we calculate the sum,
1 + (-3) = -2

Input: arr[] = {1, -2, 1, 0, 5}
       sum = 0
Output: -1
Explanation: No valid pair exists
*/
#include<iostream>
using namespace std;
bool checkSum(int a[],int sum,int n)
 {
     int i,j;
     for(i=0;i<n;i++)
      for(j=i+1;j<n;j++)
       {
           if(a[i]+a[j]==sum)
           {
               cout << "The numbers that add upto " << sum << " are " << a[i] << " and " << a[j] << endl;
               return true;
           }
       }
       return false;
 }
 int main()
 {
     int n,i,x,ret;
     cout << "Enter the size of Array:";
     cin >> n;
     int arr[n];
     cout << "Enter " << n << " Elements:";
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