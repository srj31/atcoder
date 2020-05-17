#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define forn(i,a,b) for(int i =a;i<b;i++)
#define fi first
#define se second
#define fast ios_base::sync_with_stdio(false);
using namespace std;

#define pi 3.1415926535


typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;


void solve(){
	
	double a,b,h,m;
	cin >> a >> b >> h >> m;

	double angh = 2*pi/12.0*(h+(m/60.0));
	// cout << angh << endl;
	double angm = 2*pi/60.0 * (m);
	double theta = abs(angh - angm);
	// cout << theta << endl;
	double c2 = a*a + b*b - 2*a*b*cos(theta);
	c2 = sqrt(c2);
	cout << fixed << setprecision(12) << c2 << endl; 

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
