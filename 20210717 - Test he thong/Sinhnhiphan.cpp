#include<bits/stdc++.h>
using namespace std;
main(){
	int n; cin>>n;
	bool ok=1;
	char s[n];
	for(int i=0;i<n;i++)
		s[i]='0';
	while(ok==1){
		for(int i=0;i<n;i++)
			cout<<s[i];
		cout<<endl;
		int i=n-1;
		for(;i>=0 && s[i]=='1';i--){
		}
		if(i>=0){
			s[i]='1';
			for(int j=i+1;j<n;j++){
				s[j]='0';
			}
		}
		else
			ok=0;
			
	}
	
}
