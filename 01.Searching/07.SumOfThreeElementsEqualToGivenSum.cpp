/*
Find a triplet that sum to a given value
Given an array and a value, find if there is a triplet in array whose sum is equal to the given value. If there is such a triplet present in array, then print the triplet and return true. Else return false.
Example:

Input: array = {12, 3, 4, 1, 6, 9}, sum = 24;
Output: 12, 3, 9
Explanation: There is a triplet (12, 3 and 9) present
in the array whose sum is 24. 

Input: array = {1, 2, 3, 4, 5}, sum = 9
Output: 5, 3, 1
Explanation: There is a triplet (5, 3 and 1) present 
in the array whose sum is 9. 
*/
#include<iostream>
using namespace std;
bool checkSum(int a[],int sum,int n)
 {
     int i,l,r;
     for(i=0;i<n-2;i++)
      {
     int l=i+1,r=n-1;
     while(l<r)
      {
          if(a[l]+a[r]+a[i]==sum)
           {
               cout << "The numbers that add upto " << sum << " are " << a[l] << " " << a[r] << " and " << a[i] << endl;
               return true;
           }
           if(a[l]+a[r]+a[i]>sum)
           {
               r=r-1;
           }
           else
            l=l+1;
      }
      return false;
      }
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