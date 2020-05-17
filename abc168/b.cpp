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
	int k;
	string s;
	cin >> k >> s;
	int n = s.length();
	if(n<=k){
		cout << s << endl;
	}
	else{
		string a = s.substr(0,k);
		cout << a << "..." << endl;
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
