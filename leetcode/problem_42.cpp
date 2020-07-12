class Solution {
public:
    int trap(vector<int>& arr) {
        int res = 0;
        if(arr.size() == 0){
            return res;
        }
        int n = arr.size();
        int left[n];
        int right[n];
        left[0] = arr[0];
        right[n-1] = arr[n-1];
        
        for(int i=1;i<n;i++){
            left[i] = max(left[i-1], arr[i]);
        }
        
        for(int i=n-2;i>=0;i--){
            right[i] = max(right[i+1], arr[i]);
        }
        
        for(int i=0;i<n;i++){
            res = res + min(left[i],right[i]) - arr[i];
        }
        return res;
    }
};