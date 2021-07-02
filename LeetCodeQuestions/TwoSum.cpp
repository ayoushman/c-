#include<iostream>
#include<vector>

using namespace std ; 

vector<int> twoSum(vector<int> a , int k  ){

    vector<int> result ;
    int low = 0;
    int high = a.size() -1;

    while(low<high){
        if(a[low] + a[high] < k){
          low++;
        }

        else if(a[low] + a[high] > k){
            high--;
        }

        else{
result.push_back(low);
result.push_back(high);
break;

        }
    }

    return result;

}






int main(){
vector<int> a ;


a.push_back(2);
a.push_back(7);
a.push_back(11);
a.push_back(15);


for(int i = 0 ; i< a.size() ; i++){
    cout<<a[i]<<" "<<endl;
}

vector<int> c =  twoSum(a , 9);

for(int i = 0 ; i< c.size() ; i++){
    cout<<c[i]<<" "<<endl;
}
}