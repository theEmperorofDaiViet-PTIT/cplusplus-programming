#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		string s;
		cin>>s;
			bool available[10]={};
		if(s[0]=='0'){
			cout<<"INVALID"<<endl;
			goto tiep; 
		}	
		for(int i=0;i<s.length();i++){
			if(s[i]<48 || s[i]>57){
				cout<<"INVALID"<<endl;
				goto tiep; 
			}
			else{
				s[i]-=48;
				available[s[i]]=1;
			}	
		}
		for(int i=0;i<10;i++){
			if(available[i]==0){
				cout<<"NO"<<endl;
				goto tiep; 
			}
		}
		cout<<"YES"<<endl;		
		tiep:
			continue;	
	}	
}	
