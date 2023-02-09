#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){		
		int n,X,A[10000]; cin>>n>>X;		
		for(int i=0;i<n;i++)
			cin>>A[i];
		for(int i=0;i<n;i++){
			if(A[i]==X){
				cout<<i+1;
				if(A[i]==X)
					break;
			}
			if(i==n-1)
				cout<<-1;	
		}
		cout<<endl;	
	}	
}
