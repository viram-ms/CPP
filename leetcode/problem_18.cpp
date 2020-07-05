class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector< vector <int> > res;
        if(nums.size() == 0){
            return res;
        }
        
        sort(nums.begin(), nums.end());
        for(int i=0; i< nums.size();i++){
            int sum = nums[i];
            
            for(int j=i+1;j<nums.size();j++){
                int two_sum = sum + nums[j];
                
                int l = j+1;
                int r = nums.size()-1;
                
                while(l < r){
                    if(two_sum + nums[l] + nums[r] == target){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[l]);
                        temp.push_back(nums[r]);
                        res.push_back(temp);
                        l++;
                        r--;
                        while(l < r && nums[l] == temp[2]){
                            l++;
                        }
                        
                        while(l < r && nums[r] == temp[3]){
                            r--;
                        }
                    }
                    else if(two_sum + nums[l] + nums[r] < target){
                        l++;
                    } else {
                        r--;
                    }
                }
                
                while(j + 1 < nums.size() && nums[j] == nums[j+1]){
                    j++;
                }
            }
            
            while(i+1 < nums.size() && nums[i]==nums[i+1]){
                i++;
            }
        }
       return res; 
    }
};