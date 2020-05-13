#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,k;
	cin >> a >> b >> c >> k;
	int ans = 0;
	if(k<=a){
		ans = k;
	}
	else if(k>a && k <=a + b){
		ans = a;
	}
	else{
		ans = a;
		ans -= k - (a+b);
	}
	cout << ans << endl;
}