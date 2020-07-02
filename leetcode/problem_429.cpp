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
    vector<vector<int>> levelOrder(Node* root) {
       vector< vector<int> > res;
       queue<Node*> q;
        if(root == nullptr){
            return res;
        }
        q.push(root);
        while(!q.empty()){
            int len = q.size();
            vector<int> temp;
            while(len-- > 0){
                Node* curr = q.front();
                q.pop();
                temp.push_back(curr->val);
                for(auto i = curr->children.begin(); i != curr->children.end(); i++){
                    q.push(*i);
                }
            }
            res.push_back(temp);
        }
        return res;
    }
};