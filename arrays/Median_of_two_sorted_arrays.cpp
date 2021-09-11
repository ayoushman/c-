#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;


/*This methods turns out to be 8 % faster with 7.98% less memory usage 

commented method was 86.32% faster with 6,6% memory

 I prefer the commented one
*/
vector<int> Merge_array(vector<int> v1, vector<int> v2)
{

    
    
    // for(int i = 0 ; i<a.size() ;i++){
    //     cout<<a[i]<<endl;
    // }
    sort(v2.begin(), v2.end());
    // for(int i = 0 ; i<b.size() ;i++){
    //     cout<<b[i]<<endl;
    // }
   v1.insert(v1.end(), v2.begin(), v2.end());

	// int i, j, n, m;
	// i = j = 0;
	// n = v1.size();
	// m = v2.size();


	
	// while (i < n && j < m) {

		
	// 	if (v1[i] <= v2[j]) {
	// 		v3.push_back(v1[i]);
	// 		++i;
	// 	}
	// 	else {
	// 		v3.push_back(v2[j]);
	// 		++j;
	// 	}

	// }

	
	// while (i < n) {
	// 	v3.push_back(v1[i]);
	// 	++i;
	// }


	// while (j < m) {
	// 	v3.push_back(v2[j]);
	// 	++j;
	// }
sort(v1.begin() ,v1.end());
	return v1;
}

int main()
{

    vector<int> a = {1 , 3};
    vector<int> b = { 2};

    vector<int> c = Merge_array(a , b);

if(c.size()%2==0){
    int n = ceil((c.size()/2)+1);
    int m = ceil(c.size()/2);
cout<<n<< "hERE"<<endl;
cout<<m<< "hERE"<<endl;
cout<<c[n-1]<< "hERE"<<endl;
cout<<c[m-1]<< "hERE"<<endl;
    double d = (c[m-1] + c[n-1])/2;
    cout<<d<<endl;
}
if(c.size()%2!=0){
     
    float n = c.size()/2;
    cout<<n<<"Here"<<endl;
    double d = c[n];
     cout<<d<<endl;
}






    for(int i = 0 ; i<c.size() ;i++){
        cout<<c[i]<<endl;
    }

   

    
}