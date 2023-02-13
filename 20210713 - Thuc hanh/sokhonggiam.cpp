#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		string s; cin>>s;
		bool ok=1;
		for(int i=0;i<s.length()-1;i++){
			if(s[i]>s[i+1]){		
				ok=0;
				break;
			}
		}
		if(ok==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}	
}
