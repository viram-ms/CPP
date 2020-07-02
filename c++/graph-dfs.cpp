#include<iostream>
#include<list>
using namespace std;

class Graph{
    int V;
    list<int> *adj;
    public:
    Graph(int V);
    void addEdge(int u, int v);
    void printPath(int s,int d);
    void printAllPath(int s,int d, bool visited[], int path[], int &path_index);
};

Graph::Graph(int V){
    this->V = V;
}

void Graph::addEdge(int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void Graph::printPath(int s,int d){
    bool *visited = new bool[V];
    int *path = new int[V];
    int path_index =0;
    printAllPath(s,d,visited,path,path_index);
}

void Graph::printAllPath(int s,int d,bool visited[], int path[], int &path_index){
    visited[s] = true;
    path[path_index] = s;
    path_index++;

    if(s == d){
        for(int i=0;i <path_index;i++){
            cout<<path[i]<<" ";
        }
        cout<<endl;
    } else {
        for(auto i = adj[s].begin(); i != adj[s].end(); i++){
            if(!visited[*i]){
                
                printAllPath(*i,d,visited,path,path_index);
            }
        }
    }

    visited[s] = false;
    path_index--;

    
}
