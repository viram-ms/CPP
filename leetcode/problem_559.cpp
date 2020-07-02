/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        
        if(root == nullptr){
            return 0;
        }
     
        int count = 0;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            
            int numofnode = q.size();
            count++;
            while(numofnode-- > 0){
              Node* p = q.front();
                q.pop();
                for(auto i = p->children.begin(); i!=p->children.end(); i++){
                    q.push(*i);
                }  
            }
            
            
        }
        return count;
    }
};