#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		string s; cin>>s;
		int sumodd=0,sumeven=0;
		for(int i=0;i<=s.length()-1;i+=2){
			s[i]-=48;	
			sumodd+=s[i];
		}		
		for(int i=1;i<=s.length()-1;i+=2){
			s[i]-=48;
			sumeven+=s[i];
		}			
		if((abs(sumodd-sumeven))%11==0)
			cout<<1<<endl;
		else
			cout<<0<<endl;
	}		
}
