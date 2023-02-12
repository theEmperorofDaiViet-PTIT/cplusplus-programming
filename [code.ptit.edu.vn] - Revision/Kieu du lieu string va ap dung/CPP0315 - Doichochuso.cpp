#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		bool ok=0;
		for(int i=s.length()-1;i>0;i--){
			for(int j=i-1;j>=0;j--){
				if(s[j]>s[i]){
					for(int k=j+1;k<=i;k++){
						if(s[k]==s[i]){
							swap(s[j],s[k]);
							ok=1;
							goto next;
						}	
					}
				}
			}
		}
		next:
		if(ok==1)
			cout<<s;
		else
			cout<<-1;
		cout<<endl;
	}
}
