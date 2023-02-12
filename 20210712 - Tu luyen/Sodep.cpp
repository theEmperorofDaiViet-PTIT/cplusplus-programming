#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		string s; cin>>s;
		for(int i=0;i<s.length();i++){
			if(s[i]%2!=0){
				cout<<"NO"<<endl;
				goto tiep;
			}	
		}
		for(int i=0,j=s.length()-1;i<=s.length()/2;i++,j--){
			if(s[i]!=s[j]){
				cout<<"NO"<<endl;
				goto tiep;
			}		
		}
		cout<<"YES"<<endl;		
		tiep:	
			continue;		
	}	
}	
