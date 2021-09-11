#include<iostream>
#include<vector>
using namespace std;


// Better way to solve this question is that we can just take the longest
// string as the longest string and then keep removing the elements 
// as we move to the array for example here we can just 
// keep the flower as the prefix and then move to the second and remove er as only flow is common 
// and then we will just keep the fl
  string longestCommonPrefix(vector<string>& strs) {
        
  if(strs.size()==0){
    return "";
  }
      string prefix = strs[0];
      
      
      for(int i = 1 ; i< strs.size();i++){
        while(strs[i].find(prefix)!=0){
          prefix = prefix.substr(0 , prefix.size()-1);
        }
      }
      return prefix;
    }





int main(){
 vector<string>  strs = {"flower","flow","flight"};

 string s = longestCommonPrefix(strs);
}