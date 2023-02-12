#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		string s;
		cin>>s;
		int even=0,odd=0;
		for(int i=0;i<s.length();i+=2){
			s[i]-=48;
			odd+=s[i];
		}	
		for(int i=1;i<s.length();i+=2){
			s[i]-=48;
			even+=s[i];
		}	
		int sum=abs(odd-even);
		if(sum%11==0)
			cout<<1;
		else
			cout<<0;
		cout<<endl;						
	}	
}
	
