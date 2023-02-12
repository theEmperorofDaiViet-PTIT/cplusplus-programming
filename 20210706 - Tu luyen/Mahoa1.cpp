#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		string s;
		int index=0;
		cin>>s;
		for(int i=0;i<s.length();i++){
			if(s[i]==s[i-1])
				continue;
			int count=1;
			for(int j=i+1;j<s.length();j++){
				if(s[j]==s[i])
					count++;
				else
					break;
			}
			cout<<count<<s[i];			
		}
		cout<<endl;	
	}	
}	

