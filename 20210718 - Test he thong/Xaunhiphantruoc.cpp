#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		string s; cin>>s;
		int i=s.length()-1;
		for(;i>=0 && s[i]=='0';i--){
		}
		if(i>=0){
			s[i]='0';
			for(int j=i+1;j<s.length();j++)
				s[j]='1';
		}
		if(i==-1){
			for(int j=0;j<s.length();j++)
				s[j]='1';
		}
		for(int i=0;i<s.length();i++)
			cout<<s[i];
		cout<<endl;			
	}
}
