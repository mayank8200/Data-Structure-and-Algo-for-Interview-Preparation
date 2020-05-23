#include<iostream>
using namespace std;
//Function to implement the Bubble Sort
void bubbSort(int a[],int n)
 {
     //We need one loop less than the total number bcz last element will already be sorted
     for(int i=0;i<n-1;i++)
     {
    //To make the algorithm efficient we need to keep the track if in any iteration no swapping occurs then our array is sorted
      bool swapped = false;
    //In every outer loop iteration we will have last element sorted so reducing one inner loop each time
      for(int j=0;j<n-i-1;j++)
       {
           
           if(a[j]>a[j+1])
           {
            swap(a[j],a[j+1]);
            swapped = true;
           }
       }
    //If swapping doesn't occurs each time then we break out of loop
       if(!swapped)
        break;
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
   bubbSort(a,n);
 }
