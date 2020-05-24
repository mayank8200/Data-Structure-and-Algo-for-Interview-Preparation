#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n)
 {
     int key,i,j;
     for(i=1;i<n;i++)
      {
          j=i-1;
          key=arr[i];
          while(j>=0 && arr[j]>key)
           {
               arr[j+1]=arr[j];
               j--;
           }
           arr[j+1]=key;
      }
      for(int i=0;i<n;i++)
          cout << arr[i] <<" ";
 }
 int main()
 {
   cout << "Enter the size of array:";
   int n;
   cin >> n;
   int a[n];
   cout << "Enter the elements of array:";
   for(int i=0;i<n;i++)
    cin >> a[i];
   InsertionSort(a,n);
 }