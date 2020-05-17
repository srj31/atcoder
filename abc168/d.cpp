#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define forn(i,a,b) for(int i =a;i<b;i++)
#define fi first
#define se second
#define fast ios_base::sync_with_stdio(false);
using namespace std;


typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int mxn  = 1e5+10;
vector<vi> adj(mxn);
vector<int> par(mxn);
vector<int> vis(mxn);


void solve(){
	int n,m;
	cin >> n >> m;
	for(int i =0;i<m;i++){
		int u,v;
		cin >> u >> v;
		--u,--v;
		adj[u].pb(v);
		adj[v].pb(u);
	}

	queue<int> q;
	q.push(0);
	while(!q.empty()){
		int u = q.front();
		q.pop();
		vis[u] = 1;
		for(auto v:adj[u]){
			if(!vis[v]){
				q.push(v);
				vis[v]=1;
				par[v+1] = u+1;
			}
		}
	}
	cout << "Yes" << endl;
	for(int i =2;i<=n;i++){
		cout << par[i] << endl;
	}
}

int main(){
	fast;
	#ifndef ONLINE_JUDGE
		freopen("in","r",stdin);
		freopen("out","w",stdout);
	#endif

	// int t;cin >> t;while(t--)
		solve();
}
