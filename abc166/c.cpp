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


void solve(){
	int n,m;
	cin >> n >> m;
	vector<int> good(n+1,1);
	vector<int> h(n+1);
	forn(i,1,n+1){
		cin >> h[i];
	}

	forn(i,0,m){
		int u,v;
		cin >> u >> v;
		if(h[u]>=h[v])
			good[v]=0;
		if(h[v]>=h[u])
			good[u] =0;
	}
	int count = 0;
	for(int i =1;i<=n;i++){
		if(good[i])count++;
	}
	cout << count << endl;
}

int main(){
	fast;
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	// int t;cin >> t;while(t--)
		solve();
}