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
    int c1[256] = {0};
    int c2[256] = {0};
    for(int i=0;i<a;i++)
     {
         c1[s1[i]]++;
         c2[s2[i]]++;
     }
     for(int i=0;i<256;i++)
      {
          if(c1[i]!=c2[i])
          return false;
      }
        return true;
}
int main()
  {
    string s1,s2;
    cout << "Enter two strings to check:";
    cin >> s1 >> s2;
      if (anagrams(s1, s2)) 
        cout << "The two strings are anagram of each other"; 
    else
        cout << "The two strings are not anagram of each other"; 
  
    return 0; 
  } 