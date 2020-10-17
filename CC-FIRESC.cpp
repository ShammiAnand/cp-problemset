/*
This code is written by Shammi Anand
contact : shammianand101@gmail.com, shammianand.me
*/
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define f               first
#define s               second
#define vi              vector<int>
#define pii             pair<int, int>
#define rep(i,a,n)      for(int i=a;i<n;i++)
#define F(i,n)          for(int i=0;i<n;i++)
#define all(a)          a.begin(), a.end()
// #define INF             1e9+7
#define nl              "\n"
#define w(x)            int x; cin>>x; while(x--)

template<typename T_vector>
void output(const T_vector &v, int start = -1, int end = -1) {
	if (start < 0) start = 0;
	if (end < 0) end = int(v.size());

	for (int i = start; i < end; i++) {
		cout << v[i] << (i < end - 1 ? ' ' : '\n');
	}
}

const int INF = 1e9 + 7;
int choose;

void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

class Graph {
	int V;
	list<int> *adj;

	// A function used by DFS
	void DFSUtil(int v, bool visited[]);
public:
	Graph(int V);   // Constructor
	~Graph();
	void addEdge(int v, int w);
	pii connectedComponents();
};

pii Graph::connectedComponents() {
	int count = 0;
	int ans = 1;
	// Mark all the vertices as not visited
	bool *visited = new bool[V];
	for (int v = 0; v < V; v++)
		visited[v] = false;

	for (int v = 0; v < V; v++) {
		if (visited[v] == false) {
			// print all reachable vertices
			// from v
			choose = 0;
			DFSUtil(v, visited);
			ans = ((ans % INF) * (choose % INF)) % INF;
			// cout << "\n";
			count++;

		}
	}
	// delete [] visited;
	delete[] visited;
	return {count, ans};
}

void Graph::DFSUtil(int v, bool visited[]) {
	// Mark the current node as visited and print it
	visited[v] = true;
	// cout << v << " ";
	choose++;

	// Recur for all the vertices
	// adjacent to this vertex
	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			DFSUtil(*i, visited);
}


Graph::Graph(int V) {
	this->V = V;
	adj = new list<int>[V];
}

Graph::~Graph() {
	// cout << "Done\n";
	delete[] adj;
}

// method to add an undirected edge
void Graph::addEdge(int v, int w) {
	adj[v].push_back(w);
	adj[w].push_back(v);
}
// int ans = 1;

int main() {
	shammi();
	w(t) {
		// choose = 0;
		int n, m; cin >> n >> m;
		Graph g(n);
		for (int i = 0; i < m; i++) {
			int u, v; cin >> u >> v;
			g.addEdge(u - 1, v - 1);
		}
		pii ans = g.connectedComponents();
		cout << (ans.f % INF) << " " << (ans.s % INF) << nl;
		// ~Graph();
	}
	return 0;
}