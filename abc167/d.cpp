#include<bits/stdc++.h>
using namespace std;

vector<vector<int > > adj;
vector<int> vis;
vector<int> modi;

int bc = 0;
int cs = 0;
void dfs(int u , int steps, int k){
	vis[u] = 1;
	if(vis[adj[u][0]]){
		bc = steps+1;
		cs = adj[u][0];
		return;
	}
	if(!vis[adj[u][0]])
		dfs(adj[u][0],steps+ 1, k);
	if(steps==k){
		cout << u+1 << endl;exit(0);
	}

}

int main(){
	long long int n,k;
	cin >> n >> k;
	adj = vector<vector<int > > (n);
	vis = vector<int> (n,0);
	for(int i =0;i<n;i++){
		int a;
		cin >> a;
		adj[i].push_back(a-1);
	}
	dfs(0,0,k);
	long long int msteps=k-bc;
	// start dfs from 0 for k times then see if

	vis.clear();
	vis = vector<int> (n,0);
	int u = cs;
	// cout << cs << " " << bc << endl;
	int steps = 0;
	while(!vis[u]){
		vis[u] = 1;
		modi.push_back(u);
		u = adj[u][0];

		steps++;
	}

	cout << modi[msteps%steps]+1 << endl;

}