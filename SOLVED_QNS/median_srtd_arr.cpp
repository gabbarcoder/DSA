//leetcode hard 
//two arrays of 

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> n1, vector<int> n2)
    {
        vector<double> v;
        for (int i = 0; i < n1.size(); i++)
        {
            v.push_back(n1[i]);
        }
        for (int i = 0; i < n2.size(); i++)
        {
            v.push_back(n2[i]);
        }
        sort(v.begin(), v.end());
        double ans;
        int n = v.size();
        if (v.size() % 2 == 0)
        {
            ans = (v[n / 2] + v[n / 2 - 1]) / 2;
        }
        else
            ans = v[n / 2];
        return ans;
    }
};

int main()
{
    vector<int> n1, n2;
    
    for(int i=0;i<n1.size();i++){
        cin>>n1[i];
    }

    for(int i=0;i<n2.size();i++){
        cin>>n1[i];
    }

    Solution solution;
    double median= solution.findMedianSortedArrays(move(n1),move(n2));

    cout<<median;

    return 0;
}