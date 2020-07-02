#include <bits/stdc++.h> 
using namespace std; 

class Node{
    private:
        int key;
        Node* left;
        Node* right;
};
    
    Node* newNode(int data){
        Node* n = new Node();
        n->key = data;
        n->right= nullptr;
        n->left = nullptr;
        return n;
    }

    Node* insertValue(Node* root, int val, queue<Node*>& q){
        Node* newnode = newNode(val);

        if(root == nullptr){
            root = newnode;
        }

        else if(q.front()->left == nullptr){
            q.front()->left = newnode;
        } else {
            q.front()->right = newnode;
            q.pop();
        }
        q.push(node);
        return root;
    }

    Node* createTree(int arr[], int n){
        Node* root = nullptr;
        queue<Node* > q;
        for(int i =0;i<n;i++){
            root = insertValue(root,arr[i],q);
        }
        return root;
    }

    void levelorder(Node* root){
        if(root == nullptr){
            return;
        } 
        queue<Node* > q;
        q.push(root);

        while(!q.empty()){
            cout<<q.front()->key<< " ";
            if(q.front()->left != nullptr){
                q.push(q.front()->left);
            }
            if(q.front()->right != nullptr){
                q.push(q.front()->right);
            }
            q.pop();
        }
    }

    int main(){
        int arr[] = {10,20,30,40,50};
        int n = sizeof(arr) / sizeof(arr[0]);
        Node* root = createTree(arr,n);
        levelorder(root);
        return 0;
    }