#include <bits/stdc++.h> 
using namespace std;
bool anagrams(string s1,string s2)
 {
     int a = s1.length();
     int b = s2.length();
      if(a!=b)
        {
            return false;
        }
      sort(s1.begin(),s1.end());
      sort(s2.begin(),s2.end());
      for(int i=0;i<a;i++)
       {
           if(s1[i]!=s2[i])
            return false;
       }
       return true;
      
 }
 int main()
  {
    string str1,str2;
    cout << "Enter two strings to check:";
    cin >> str1 >> str2;
      if (anagrams(str1, str2)) 
        cout << "The two strings are anagram of each other"; 
    else
        cout << "The two strings are not anagram of each other"; 
  
    return 0; 
  }