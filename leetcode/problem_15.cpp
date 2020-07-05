class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector< vector<int>> res;
        if(nums.size() == 0){
            return res;
        }
        for(int i=0;i<nums.size();i++){
            
            int l = i + 1;
            int r = nums.size()-1;
            while(l < r){
                if(nums[i] + nums[l] + nums[r] == 0){
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);
                    res.push_back(temp);
                    l++;
                    r--;
                    while(l < r && nums[l] == temp[1]){
                        l++;
                    }
                    while(l < r && nums[r] == temp[2]){
                        r--;
                    }
                    
                } else if(nums[i] + nums[l] + nums[r] < 0){
                    l++;
                } else {
                    r--;
                }
            }
            while(i + 1< nums.size() && nums[i] == nums[i+1]){
                i++;
            }
        }
        return res;
    }
};