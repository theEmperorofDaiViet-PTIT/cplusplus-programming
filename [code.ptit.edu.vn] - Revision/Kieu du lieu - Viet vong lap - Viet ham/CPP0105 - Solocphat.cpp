#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		for(int i=0;i<s.length();i++){
			if(s[i]!='0' && s[i]!='6' && s[i]!='8'){
				cout<<"NO";
				goto next;
			}
		}
		cout<<"YES";
		next:
			cout<<endl;
	}
}
