/*
Find repeated character present first in a string
Given a string, find the repeated character present first in the string.
Examples:
Input  : geeksforgeeks
Output : g
(mind that it will be g, not e.)
*/
#include<bits/stdc++.h>
using namespace std;
void findChar(string s1)
 {
     int a=s1.length();
     int ind = -1;
     int pos[256];
     int occ[256] = {0};
     for(int i=0;i<a;i++)
    {
        if(occ[s1[i]]==0)
         {
             occ[s1[i]]++;
             pos[s1[i]]=i;
         }
         else
         {
             occ[s1[i]]++;
         }
         
        
     }
     for(int i=0; i<255; i++)
     {
         if(occ[i] >=2)
          {
            if(ind == -1)
            ind = pos[i];
            else if(ind > pos[i])
            ind = pos[i];
          }
     }
       if(ind!=-1)
        cout << "The first repeating character is " << s1[ind];
        else
         cout<< "No repeating character exists";
 }
 int main()
  {
      string s1;
      cout << "Enter the string to find the first repeating character:";
      cin >> s1;
      findChar(s1);
      return 0;
  }