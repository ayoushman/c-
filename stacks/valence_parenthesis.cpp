#include<iostream>
#include<stack>
using namespace std ; 




bool valencePare(string s ){
stack<char>  st ;
for(int i = 0 ; i<s.size() ; i++){
    if(s[i]=='('){
     st.push(s[i]);
    }
     else if(s[i]=='['){
        st.push(s[i]);
    }
     else if(s[i]=='{'){
         st.push(s[i]);
    }

     else if(!st.empty() and s[i]=='}'){
         if(st.top()!='{'){
             cout<<"boo1"<<endl;
             return false ; 
         }
         else {
             st.pop();
         }
     
     
    }
      else if(!st.empty() and s[i]==']'){
         if(st.top()!=']'){
                cout<<"boo3"<<endl;
             return false ; 
         }
           else {
             st.pop();
         }
     
     
    }
      else if(!st.empty() and s[i]==')'){
         if(st.top()!='('){
                cout<<"boo2"<<endl;
             return false ; 
         }
         else {
             st.pop();
         }
     
     
    }
}
if(!st.empty()){
    return false ;
}

return true ;

}


int main(){
    string s = "(())";



cout<<valencePare(s)<<endl;

}