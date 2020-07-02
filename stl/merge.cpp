#include <iostream>
#include <vector>
#include <algorithm>
#define all(c) v.begin(), v.end()
#define tr(container, it) \
for(auto it = container.begin(); it != container.end(); it++)
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      vector < int > result(nums1.size() + nums2.size());
        
        
        vector < int > res = vector <int> (result.begin(),merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),result.begin()));
        
        for(auto i = res.begin(); i!= res.end(); i++){
            cout<<*i<< " ";
        }
        
        int n = res.size();
        
        if(n % 2 != 0){
            return double (res[n / 2]);
        } else {
            return double (res[n/2-1] + res[n/2])/2;
        }
    }
};