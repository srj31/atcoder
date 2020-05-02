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

bool ok(int m,int x){
	if(100*pow((1.01),m)>=x)
		return true;
	else return false;
}

void solve(){
	ll x;
	cin >> x;	
	ll curr = 100;
	int days = 0;
	while(curr<x){
		curr+=curr/100;
		days++;
	}

	cout << days << endl;

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