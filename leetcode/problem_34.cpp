class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        if(binary_search(nums.begin(),nums.end(),target)){
            int l = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
            res.push_back(l);
            int r = upper_bound(nums.begin(),nums.end(),target) - nums.begin();
            res.push_back(r-1);    
        } else {
            res.push_back(-1);
            res.push_back(-1);
        }
        return res;
    }
};