/*Given an array containing n integers and an number s denoting target sum
Find all the distinct integers that can add up to form target sum . The number in each triplet should be 
ordered in ascending order , and triplets should be ordered too

Return empty array if no such triplets exists

for example 

array = [1 , 2 , 3 , 4 , 5, 6 , 7 ,  8 , 9 , 15]
target = 18


output 
 [[1 , 2, 15],
 [3 , 7 ,8],
 [4 ,6 , 8],
 [5 , 6, 7]]

 */


#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std ;



vector<vector<int>> triplets(vector<int> arr , int sum){


sort(arr.begin() , arr.end());

// Pick every a[i] , pair sum for the remaining part 

// for(int i = 0; i<=n-3 ;)
// }



// int main(){




//     return 0 ;
// }
