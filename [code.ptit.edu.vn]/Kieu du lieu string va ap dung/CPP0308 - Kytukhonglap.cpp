#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		string s; cin>>s;
		for(int i=0;i<s.length();i++){
			bool ok=1;
			for(int j=0;j<s.length();j++){				
				if(j!=i && s[i]==s[j]){
					ok=0;
					break;
				}
			}
			if(ok==1)
				cout<<s[i];		
		}
		cout<<endl;	
	}	
}
