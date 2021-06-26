#include<iostream>
#include<stack>
using namespace std; 



int main(){
    stack<int> st ;
    stack<int> result;


   st.push(3); 
     st.push(11);
       st.push(10);
         st.push(9);
           st.push(2);
             st.push(7);
             st.push(1);

             while(st.size()){
    cout<<st.top()<<endl;
    st.pop();
}
// while(st.size()){
//     result.push(st.top());
// st.pop();

// }


// while(result.size()){
//     cout<<result.top()<<endl;
//     result.pop();
// }
}