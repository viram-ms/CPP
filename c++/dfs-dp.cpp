#include<bits/stdc++.h>
using namespace std;

void addedge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}



int main(){
    int V = 5;
    vector<int> adj[V];

    addedge(adj,1,2);
    addedge(adj,1,3);
    addedge(adj,1,4);
    addedge(adj,2,5);
    addedge(adj,2,6);
    addedge(adj,3,7);
    addedge(adj,4,8);
    addedge(adj,4,9);

    vector<int> A = {1,3,4,5,1,2,3,2,1};

}