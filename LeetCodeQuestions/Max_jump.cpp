#include<iostream>
#include<vector>
using namespace std;

 int jump(vector<int>& n) {
        int len = n.size()-1 , curr = -1 , ans = 0, next = 0;
        
         for (int i = 0; next < len; i++) {
            if (i > curr){
                 ans++;
                curr = next;
            }
            next = max(next, n[i] + i);
        };
        return ans;
    }



