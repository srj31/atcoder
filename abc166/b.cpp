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
	int n,k;
	cin >> n >> k;
	map<int,int> has;
	for(int i =0;i<k;i++){
		int d;
		cin >> d;
		forn(j,0,d){
			int a;
			cin >> a;
			has[a]++;
		}
	}
	int ans =0 ;
	for(int i =1;i<=n;i++){
		if(has[i]==0)
			ans++;
	}
	cout<< ans << endl;
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