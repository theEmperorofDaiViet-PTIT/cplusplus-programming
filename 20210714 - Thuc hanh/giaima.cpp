#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		string s;
		cin>>s;
		for(int i=0;i<s.length();i+=2){
			for(int j='1';j<=s[i+1];j++){
				cout<<s[i];
			}
		}
		cout<<endl;
	}
}
