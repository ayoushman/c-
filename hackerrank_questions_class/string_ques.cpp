

 

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s= "aaabccddd";
    
   int i=0;
    string ans="";
    int n = s.size();
   while(i<n)
   {
       if(s[i]==s[i+1])
       {
         i=i+2;
       }
       else{
           ans=ans+s[i];
           i++;
       }
   }
    if(ans.empty())
    {
        cout<<"Empty String";
    }
   else
    {
        cout<<ans;
    }
    
    return 0;
}
