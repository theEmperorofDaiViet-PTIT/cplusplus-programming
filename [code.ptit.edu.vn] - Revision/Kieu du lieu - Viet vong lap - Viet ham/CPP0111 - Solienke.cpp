#include<bits/stdc++.h>
using namespace std;
bool check(string s){
	for(int i=0;i<s.length()-1;i++){
		if(abs(s[i]-s[i+1])!=1)
			return 0;
	}
	return 1;
}
main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		if(check(s)==0)
			cout<<"NO";
		else
			cout<<"YES";
		cout<<endl;
	}
}
