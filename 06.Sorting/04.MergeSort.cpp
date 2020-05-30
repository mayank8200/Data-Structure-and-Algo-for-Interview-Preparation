#include<iostream>
using namespace std;
void Merge(int a[],int l,int m, int r)
 {
     int n1 = m-l+1;
     int n2 = r-m;
     int Left[n1],Right[n2];
     for(int i=0;i<n1;i++)
      Left[i]=a[i];
     for(int i=0;i<n2;i++)
      Right[i]=a[n1+i];
     int i=0,j=0,k=0;
     while(i<n1 && j<n2)
      {
          if(Left[i]>Right[j])
          {
              a[k]=Right[j];
              k++;
              j++;
          }
          else
          {
              a[k]=Left[i];
              k++;
              i++;
          }
      }
      while (i<n1)
      {
          a[k]=Left[i];
          k++;
          i++;
      }
      while (j<n2)
      {
          a[k]=Right[j];
          k++;
          j++;
      }
      
      
 }
void mergeSort(int a[],int l,int r)
{
    if(l<r)
     {
         int m = (l+r)/2;
         mergeSort(a,l,m);
         mergeSort(a,m+1,r);
         Merge(a,l,m,r);
     }
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
   mergeSort(a,0,n-1);
   for(int i=0;i<n;i++)
          cout << a[i] <<" ";
 }