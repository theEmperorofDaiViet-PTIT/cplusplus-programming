#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		cout<<pow(2,n)<<endl;
		string s;
		for(int i=0;i<n;i++)
			s[i]='6';
		bool ok=1;
		while(ok==1){
			for(int i=0;i<n;i++)
				cout<<s[i];
			cout<<" ";
			int i=n-1;
			for(;i>=0 && s[i]=='8';i--){
			}
			if(i>=0){
				s[i]='8';
				for(int j=i+1;j<n;j++){
					s[j]='6';
				}			
			}
			else
				ok=0;
		}
		cout<<endl;
	}
}
