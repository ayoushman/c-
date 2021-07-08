/* So what we can do this to get this solution we can simply just 
break the problem in the two halfs 
Here it will be easier with a example 


int the firs the we will make the transpose of the matrix 

*/


#include<iostream>
#include<vector>
using namespace std ; 



int main(){
    vector<vector<int>> arr ;

  vector<vector<int>> vect
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }   
        cout << endl;
    }

    for(int i = 0  ; i< vect.size() ;i++){
        for(int j = i ; j< vect[i].size() ;j++){
           int temp = vect[i][j];
           vect[i][j] = vect[j][i];
           vect[j][i] = temp;
        }
    }

    cout<<endl;

    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }   
        cout << endl;
    }

    // And finally we will be doing two pointer approach in the function to get the desired output 


for(int i = 0; i<vect.size(); i++){
    int low = 0 ; 
    int high = vect[i].size()-1;

while(low<high){
    int temp =  vect[i][low];
    vect[i][low] = vect[i][high];
    vect[i][high] = temp;

    low++;
    high--;
}

}

  cout<<endl;

    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }   
        cout << endl;
    }

 
    return 0;


}
