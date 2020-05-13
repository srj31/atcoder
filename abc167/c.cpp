#include<bits/stdc++.h>
using namespace std;
int n,m,x;
vector<int> c;
vector<vector<int> > a;
int ans = 1e9;
void solve(vector<int> &skills,int i, int cost){

	if(i==n){
		int pos = 1;
		for(int j =0;j<m;j++){
			if(skills[j]<x)
				pos = 0;
		}
		if(pos){
			ans = min(ans,cost);
		}
		return;
	}
	// cout << i  << " " << cost << endl;
	for(int j =0;j<m;j++){
		skills[j]+=a[i][j];
		// cout << skills[j] << " ";
	// }cout << endl;
	}
	solve(skills,i+1,cost+c[i]);
	
	for(int j =0;j<m;j++){
		skills[j]-=a[i][j];
		// cout << skills[j] << " ";

	// }cout << endl;
	}
	solve(skills,i+1,cost);
}


int main(){

	cin >> n >> m >> x;
	c=  vector<int> (n);
	a = vector<vector<int> > (n);
	for(int i =0;i<n;i++){
		cin >> c[i];
		for(int j =0;j<m;j++){
			int y;
			cin >> y;
			a[i].push_back(y);
		}
	}
	vector<int> skills(m,0);
	solve(skills, 0 , 0);

	if(ans == 1e9){
		cout << -1 << endl;
	}
	else{
		cout << ans << endl;
	}
}