class Solution {
public:
    
    
    bool isSafe(vector<string> board, int row,int col, int n){
        for(int i=0;i<row;i++){
            if(board[i][col] == 'Q') return false;
        }
        
        for(int i=row,j=col; i>=0 && j>=0;i--,j--){
            if(board[i][j] == 'Q') return false;   
        }
        
        for(int i=row,j=col; i>=0 && j<n;i--,j++){
            if(board[i][j] == 'Q') return false;
        }
        
        return true;
    }
    
    
    void solve(vector<string>& board,int row, int col, vector<vector<string>>& res){
        
        
        if(row == board.size()){
            res.push_back(board);
            return;
        }
        
        for(int col=0;col<board.size();col++){
            if(isSafe(board,row,col,board.size())){
                board[row][col] = 'Q';
                solve(board,row+1,col,res);
                board[row][col] = '.';
            }
        }
        
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<string> s;
        string s1 = "";
        vector<vector<string>> res;
        for(int i=0;i<n;i++){
            s1 += ".";
        }
        
        for(int i=0;i<n;i++){
            s.push_back(s1);
        }
        solve(s,0,n,res);
        
        return res;
    }
};