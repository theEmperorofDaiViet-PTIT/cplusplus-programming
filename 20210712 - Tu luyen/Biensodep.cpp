#include<bits/stdc++.h>
using namespace std;
bool increase(string s){	
	for(int i=5;i<=6;i++){		
		if(s[i]>=s[i+1])
			return 0;				
	}
	if(s[7]>=s[9] || s[9]>=s[10])
			return 0;
	return 1;		
}
bool equal(string s){
	for(int i=5;i<=7;i++){		
		if(s[i]!=s[5])
			return 0;				
	}
	if(s[9]!=s[10])
			return 0;
	return 1;
}	
bool success(string s){
	for(int i=5;i<=10;i++){
		if(i==8)
			continue;
		if(s[i]!='6' && s[i]!='8')
			return 0;				
	}
	return 1;	
}	
main(){
	int T; cin>>T;
	while(T--){
		string s; cin>>s;
		if(increase(s)==0 && equal(s)==0 && success(s)==0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;	
	}		
}	
