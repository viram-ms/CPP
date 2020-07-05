class Solution {
public:
    
    
    bool isCyclicUtil(int v, vector<int> adj[], bool visited[], bool *recStack) 
    { 
        if(visited[v] == false) 
        { 
            // Mark the current node as visited and part of recursion stack 
            visited[v] = true; 
            recStack[v] = true; 

            // Recur for all the vertices adjacent to this vertex  
            for(auto i = adj[v].begin(); i != adj[v].end(); ++i) 
            { 
                if ( !visited[*i] && isCyclicUtil(*i,adj, visited, recStack) ) 
                    return true; 
                else if (recStack[*i]) 
                    return true; 
            } 

        } 
        recStack[v] = false;  // remove the vertex from recursion stack 
        return false; 
    }
    
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<int> V[n];
        
        for(int i=0;i<p.size();i++){
            int x = p[i][0];
            int y = p[i][1];
            V[x].push_back(y);
        }
        
        
        bool *visited = new bool[n]; 
        bool *recStack = new bool[n]; 
        for(int i = 0; i < n; i++) 
        { 
            visited[i] = false; 
            recStack[i] = false; 
        } 
 
        for(int i = 0; i < n; i++) 
            if (isCyclicUtil(i,V, visited, recStack)) 
                return false; 

        return true;
    }
};