class Solution {
public:
    
    void dfs(int node, vector<int> v[], bool visited[]){
        
        visited[node] = true;
        
        for(auto i=v[node].begin(); i!=v[node].end();i++){
            if(visited[*i] == false){
                dfs(*i,v,visited);
            }
        }
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<int> V[n];
        bool *visited = new bool[n];
        for(int i=0;i<n;i++){
            visited[i] = false;
        }
        
        for(int i=0;i<connections.size();i++){
            int x = connections[i][0];
            int y = connections[i][1];
            V[x].push_back(y);
            V[y].push_back(x);
        }
        int count = 0;
        
        for(int i=0;i<n;i++){
            if(visited[i]==false){
                dfs(i,V,visited);
                count += 1;
            }   
        }
        
        if(connections.size() >= n-1){
            return count-1;
        } else {
            return -1;
        }
        
    }
};