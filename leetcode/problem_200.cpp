class Solution {
public:
     void dfs(vector<vector<char>>& grid, int row, int col){
        
        grid[row][col] = '0';
        // if right == 1, dfs right
        if(col + 1  < grid[row].size() && grid[row][col+1] == '1'){
            dfs(grid, row, col + 1);
        }
        // if left == 1 dfs left
          if(col - 1  >= 0 && grid[row][col-1] == '1'){
            dfs(grid, row, col - 1);
        }
        // if up == 1, dfs up
          if(row > 0 && grid[row - 1][col] == '1'){
            dfs(grid, row - 1, col);
        }
        // if down == 1, dfs down
         if(row < grid.size() - 1 && grid[row + 1][col] == '1'){
            dfs(grid, row + 1, col);
        }
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j  < grid[i].size(); j++){
                if(grid[i][j] == '1'){
                    dfs(grid, i , j);
                    islands++;
                }
            }
        }
        return islands;
    }
};