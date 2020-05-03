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
	int n;
	cin >> n;
	int a[n];
	map<int,vector<int> > f;
	for(int i =0;i<n;i++){
		cin >> a[i];
		int key= i+1 - a[i];
		f[key].pb(i+1);
	}
	ll count = 0;
	for(int i =0;i<n;i++){
		int check = i+1 + a[i];
		if(f.find(check)!=f.end()){
			ll b = upper_bound(f[check].begin(),f[check].end(),i+1) - f[check].begin();
			ll size = f[check].size();
			count+=size-b;
			// cout << count << endl;
			// count+=(size-1-terms);
		}
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