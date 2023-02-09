#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		int A[100000];
		bool available[100000]={};
		for(int i=0;i<n;i++){
			cin>>A[i];
			if(A[i]>=0)
				available[A[i]]=1;
		}
		for(int i=1;i<100000;i++){
			if(available[i]==0){
				cout<<i;
				break;
			}				
		}
		cout<<endl;	
	}	
}
