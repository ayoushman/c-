#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <unordered_set>
using namespace std;

// This approach work on the sorted array The time complexity of this problem is o(nlogn)
bool pair_sum_optimized(int a[], int n, int sum)
{

    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        if (a[low] + a[high] > sum)
        {
            high--;
        }
        else if (a[low] + a[high] < sum)
        {
            low++;
        }

        else
        {
            cout << low << " " << high << endl;
            return true;
        }
    }
    cout << "No sum found" << endl;
    return false;
}

// Now can we do better so the answer is yes we can do better how u ask with the help of unordered set
// All operations on the unordered_set takes constant time O(1) on an average which can go up to linear time O(n) in worst case
// So here we have to so something basic we will iterate to each element and push it into set after that we will check if we get the sum
// from the number aldready in the set and the number we just pushed if yes we will return it
// Now one question can arise why dont just push them all at the same time in the set why we gotta push them
// one by one well the answer is quite simple we wont distinct integers but if the number is aldready present and their sum becomes the answer
// this logic gets corrupted

vector<int> pair_sum_m_o(vector<int> a, int Sum)
{
    unordered_set<int> s;
    vector<int> result;

    // 1 , 2 , 3 , 4 SUM = 4 \

    for (int i = 0; i < a.size(); i++)
    {
        int x = Sum - a[i];

        if (s.find(x) != s.end())
        {
            result.push_back(x);
            result.push_back(a[i]);

            return result;
        }

        s.insert(a[i]);
    }

    return {};
}

int main()
{
    int a[] = {1, 4, 5, 2, 7, 11, 23, 55};
    int n = sizeof(a) / sizeof(a[0]);
    sort(a, a + n);
    int k = 7;
    pair_sum_optimized(a, 8, k);
}