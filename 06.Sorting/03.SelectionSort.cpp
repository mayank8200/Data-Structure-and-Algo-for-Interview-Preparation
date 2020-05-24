#include<iostream>
using namespace std;
void SelectionSort(int a[],int n)
  {
      int i,j;
      for(i=0;i<n-1;i++)
       for(j=i+1;j<n;j++)
         {
             if(a[i]>a[j])
              swap(a[i],a[j]);
         }
         for(int i=0;i<n;i++)
          cout << a[i] <<" ";
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
   SelectionSort(a,n);
 }