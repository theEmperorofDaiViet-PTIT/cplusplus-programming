#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		string s;
		cin>>s;
		int n=s.length()-1;
		if(s[n-1]=='8' && s[n]=='6')
			cout<<1;
		else
			cout<<0;
		cout<<endl;		
	}	
}
