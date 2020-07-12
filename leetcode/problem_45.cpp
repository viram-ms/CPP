class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size() - 1;
        int count = nums.size() - 1;
        int arr[count+1];
        arr[count] = 0;
        count--;
        int min_val=0;
        while(count >= 0){
            if(nums[count] == 0){
                arr[count] = -1;
                count--;
                continue;
            }
            else if(nums[count] >= n - count){
                arr[count] =  1;
            } 
            else {
                int val = INT_MAX;
                for(int j=nums[count];j>0;j--){
                    if(count +j < n && arr[count + j] < val && arr[count + j] != -1){
                        val = arr[count+j];
                        if(val == 1){
                            break;
                        }
                    }
                }
                if(val == INT_MAX){
                    arr[count] = -1;
                } else {
                    arr[count] = 1 + val;    
                }       
                min_val += 1;
            }
            count--;
        }
        return arr[0];
    }
};