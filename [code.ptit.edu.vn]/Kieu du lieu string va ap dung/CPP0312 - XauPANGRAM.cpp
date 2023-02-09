#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin>>t;
	while(t--){
		string S; cin>>S;
		int K; cin>>K;
		bool available[125]={};
		for(int i=0;i<S.length();i++){
			available[S[i]]=1;
		}
		int dem=0;	
		for(int i=97;i<=122;i++){
			if(available[i]==1)
				dem++;
		}	
		if(((26-dem)<=K) && (S.length()>=26))
			cout<<1;
		else
			cout<<0;
		cout<<endl;			
	}	
}
