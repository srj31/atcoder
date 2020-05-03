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
int mxN = 3*1e3+99;

set<ll> p5;
vector<ll> p(mxN,0);

inline ll pow(ll i){
  return i*i*i*i*i;
}
 
void ans(ll i, ll j){
  cout << i << " " << j << endl;
}
 
int main(){
  IO; ll X; cin >> X;
  REPN(i,125){
    REPN(j,125){
      if(pow(i)-pow(j)==X){
        ans(i,j);
        return 0;
      }
      if(pow(i)+pow(j)==X){
        ans(i,-j);
        return 0;
      }
      if(-pow(i)+pow(j)==X){
        ans(-i,-j);
        return 0;
      }
    }
  }
}	solve();
