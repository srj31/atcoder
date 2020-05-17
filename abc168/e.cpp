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


map<pair<ll,ll>,int>  vecs;

long long int gcd(ll a, ll b){
	return b?gcd(b,a%b):a;
}
const ll mod = 1e9 + 7;
// map<pll,vector<pll> > perps;

ll binpow(ll a, ll b){
	ll res = 1;
	while(b>0){
		if(b&1){
			res = res*a%mod;
		}
		a = a*a%mod;
		b>>=1;
	}
	return res;
}

void solve(){
	int n;
	cin >> n;
	ll ans = 0;
	map<pll,int> dp;
	for(int i =0;i<n;i++){
		ll a,b;
		cin >> a >> b;
		ll g = gcd(a,b);
		if(g<0) g*=-1;
		a/=g;
		b/=g;
		// cout << a << " " << b << endl;
		vecs[make_pair(a,b)]++;
		if(i==0){
			ans++;
			dp[make_pair(a,b)] = 1;
		}
		else{
			pll perp1  = make_pair(-b,a);
			pll perp2 = make_pair(b,-a);
			ll toadd = ans+1;
			cout << ans << " " << toadd  << endl;

			if(vecs.find(perp1)!=vecs.end()){
				toadd -= dp[perp1];
				cout << "12" << endl;
			}
			if(vecs.find(perp2)!=vecs.end()){
				toadd -=dp[perp2];
				cout << "12" << endl;

			}
			ans+=toadd;
			dp[make_pair(a,b)]=ans; 
			cout << ans << " " << toadd  << endl;
		}
	}
	cout << ans << endl;
	


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
