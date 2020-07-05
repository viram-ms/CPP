class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = 0;
        
        if(n  > 1){
        while(l < n && r < n){
            while(r < n && nums[r] == 0){
                r++;
            }
            while(l < n && nums[l] != 0){
                l++;
            }
            if(l< n && r < n && l < r){
                swap(nums[l], nums[r]);    
            } 
            r++;
        }
        }
    }
};