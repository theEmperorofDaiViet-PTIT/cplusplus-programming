#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;	
	while(T--){
		string s;
		cin>>s;
		if(s[s.length()-2]=='8' && s[s.length()-1]=='6')
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;	
	}	
}	
