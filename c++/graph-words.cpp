#include<iostream>
using namespace std;

class Graph{

	vector<int> *gh;
	int V;
	int *in;
	public:
		Graph(int V);
		~Graph(){delete [] gh; delete [] in};

		void addEdge(int u,int v);
		bool isEuclerianCycle();
		bool isSc();
		void DFSUtil(int v, bool visited[]);
		Graph getTranspose();
};

Graph::Graph(int V){
		this.V = V;
		gh = new vector<int>[V];
		in = new int[V];
		for(int i=0;i<V;i++){
			in[i] = 0;
		}
	}
void Graph::addEdge(int u,int v){
	gh[u].push_back(v);
	in[v]++;
}


bool isSc(){
	bool *visited = new bool[V];
	for(int i=0;i<V;i++){
		visited[i] = false;
	}

	int n;
	for(int n=0;n<V;n++){
		if(gh[n]>0){
			break;
		}
	}

	DFSUtil(n,visited);

	for(int i=0;i<V;i++){
		if(gh[i].size() > 0 && visited[i] == false){
			return false;
		}
	}

	Graph gr = getTranspose();

	for(int i=0;i<V;i++){
		visited[i] = false;
	}

	gr.DFSUtil(n,visited);

	for(int i=0;i<V;i++){
		if(gh[i].size() > 0 && visited[i] == false){
			return false;
		}
	}

	return true;
}


Graph Graph::getTranspose(){
	Graph g(V);
	for(int v=0;v<V;v++){
		vector<int>::iterator i;
		for(int i=gh[v].begin();i!=gh[v].end();i++){
			g.gh[*i].push_back(v);
			g.in[v]++;
		}
	}
	return g;
}


void Graph::DFSUtil(int v, bool visited[]){

	visited[v] = true;

	for(auto i=gh[v].begin();i!=gh[v].end();i++){
		if(visited[*i]==false){
			DFSUtil(*i,visited);
		}
	}
}





bool canBeChained(string arr[], int n){
	Graph g;
	for(int i=0;i<n;i++){
		string s = arr[i];
		g.addEdge(s[0]- 'a', s[s.size()-1] - 'a');
	}

	return g.isEuclerianCycle;
}