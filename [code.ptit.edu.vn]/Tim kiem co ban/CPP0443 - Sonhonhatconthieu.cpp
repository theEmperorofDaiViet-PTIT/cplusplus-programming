#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){		
		int n; cin>>n;
		int A[n];
		bool avaiable[n]={};			
		for(int i=0;i<n-1;i++){			
			cin>>A[i];	
			avaiable[A[i]]=1;
		}			
		for(int i=1;i<=n;i++){
			if(avaiable[i]==0){
				cout<<i;
				break;	
			}			
		}
		cout<<endl;	
	}	
}
