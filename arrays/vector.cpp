#include<iostream>
#include<vector>
using namespace std;


int main(){

vector<int> arr = {1 , 2 , 3 , 4 , 5};

// Whenever we push a new element to the vector it doubles itself in its size 

// Fill constructor for initialization of vectors

// For each loop 

for(int number : arr){
    cout<<number;
}


// 2D ARRAY 

vector<vector<int>> twoArr = {{1 ,2 , 3 , 4} , {3 , 5 , 2 ,78}, {23 , 56 , 211 , 12}};


for(int i = 0 ; i< twoArr.size() ;i++){
    for(int number: twoArr[i]){
        cout<<number;
    }

    cout<<endl;
}

vector<int> arr2( 1, 4);


    return 0;
}