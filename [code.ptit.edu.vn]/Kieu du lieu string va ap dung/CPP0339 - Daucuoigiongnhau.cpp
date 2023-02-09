#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		string s; cin>>s;
		int dem=0;			
		for(int amount=1;amount<=s.length();amount++){
			for(int start=0;start+amount-1<=s.length()-1;start++){		
				if(s[start]==s[start+amount-1])
					dem++;
			}		
		}
		cout<<dem<<endl;	
	}	
}
