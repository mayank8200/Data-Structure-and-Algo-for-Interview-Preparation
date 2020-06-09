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
     for(int i=0;i<a-1;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            if(s1[i]==s1[j])
            {
                ind = i;
                break;
            }
        }
        if(ind!=-1)
         break;
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