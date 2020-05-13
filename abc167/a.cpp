#include<bits/stdc++.h>
using namespace std;

int main(){
	string s,t;
	cin >> s >> t;
	int len = s.length();
	if(t.substr(0,len)==s && t.length()==len+1)
		cout << "Yes" << endl;

	else 
	 	cout << "No" << endl; 
}