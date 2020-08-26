class Solution {
public:
    
    
    void dfs(int index,vector<int>& candidates, int target, vector<int>& temp,set<vector<int>>& res, int temp_sum){
        
        if(temp_sum > target){
            return;
        }
        
        if(temp_sum != target && index >= candidates.size()){
            return;
        }
        
        if(temp_sum == target && index == candidates.size()){
            res.insert(temp);
            return ;
        }
        
        if(temp_sum == target){
            res.insert(temp);
            return ;
        }
        
        temp.push_back(candidates[index]);
        dfs(index + 1, candidates,target,temp,res,temp_sum + candidates[index]);
        temp.pop_back();
        dfs(index+1,candidates,target,temp,res,temp_sum);
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        set<vector<int>> res;
        sort(candidates.begin(),candidates.end());
        dfs(0,candidates,target,temp,res,0);
        
        vector<vector<int>> s(res.begin(),res.end());
        return s;
    }
};