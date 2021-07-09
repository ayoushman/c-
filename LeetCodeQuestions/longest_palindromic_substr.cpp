#include <iostream>
using namespace std;

void longest_palindrome_str(string s)
{

    if(s.size()==2){
        cout<<s[0]<<endl;
    }

    if(s.size()==1){
        cout<<s<<endl;
    }
    string k = "";
    string ans = "";

    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        string k = "";
        k = k + s[i];
        
        for (int j = i+1; j < n; j++)
        {
            k = k + s[j];
          
          
            int l = 0;
          
            int h = k.size() - 1;
          
            int ptr = 0;
            while (h > l)
            { 
                
                if (k[h] != k[l])
                {
                    ptr = 1;
                    break;
                }
                h--;
                l++;
            }

            if (ptr == 0)
            { 
                if (k.size() > ans.size())
                {
                    ans = k;
              
                }
            }
        }


    }

    cout<<ans<< " Hey its the answer"<<endl;

  
}

int main()

{

    string s = "a";
     longest_palindrome_str(s);

}