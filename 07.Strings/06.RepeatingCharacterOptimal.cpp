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
     int index[256];
     int res = INT_MAX; 
     for(int i=0;i<256;i++)
      index[i]=-1;

     for(int i=0;i<a;i++)
      {
          if(index[s1[i]]==-1)
           index[s1[i]] = i;
          else
           res = min(res,index[s1[i]]);
      }
      if(res == INT_MAX)
       cout<< "No repeating character exists";
      else
       cout << "The first repeating character is " << s1[res];
 }
  int main()
  {
      string s1;
      cout << "Enter the string to find the first repeating character:";
      cin >> s1;
      findChar(s1);
      return 0;
  }