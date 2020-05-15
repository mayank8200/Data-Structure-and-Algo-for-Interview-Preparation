/*
Pythagorean Triplet in an array
Given an array of integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a2 + b2 = c2.
Example:

Input: arr[] = {1, 3, 4, 5, 6}
Output: True
There is a Pythagorean triplet (3, 4, 5).

Input: arr[] = {4, 5, 6, 10, 12}
Output: False
There is no Pythagorean triplet.
*/
#include<iostream>
#include <cmath>

using namespace std;
bool findTriplet(int arr[],int n)
 {
     int i,l,r;
     for (int i = 0; i < n; i++) 
        arr[i] = arr[i] * arr[i];

     
     for(i=n-1;i>=2;i--)
      {
     int l=0,r=i-1;
     while(l<r)
      {
       if(arr[l]+arr[r]==arr[i])
         {
             cout << "The Pythogorean Triplets are " <<sqrt(arr[l]) << " " << sqrt(arr[r]) << " and " << sqrt(arr[i]) <<endl;
             return true;
         }
        if(arr[l]+arr[r]>arr[i])
         {
             r--;
         }
         else
            l++;   
      }
      return false;
      }
 }
 int main()
 {
     int n,i;
     cout << "Enter the size of Array:";
     cin >> n;
     int arr[n];
     cout << "Enter " << n << " Elements(sorted):";
     for(i=0;i<n;i++)
     {
         cin >> arr[i];
     }
     //Calling Function
     if(findTriplet(arr,n))
      cout << "Pythagorean Triplet is present";
    else
        cout << "Pythagorean Triplet is not present";
    return 0;
 }