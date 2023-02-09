#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		int n,m,k; cin>>n>>m;
		k=m+n;
		long long A[10000],B[10000],C[10000];
		for(int i=0;i<n;i++){			
			cin>>A[i];
			C[i]=A[i];
		}	
		for(int i=0;i<m;i++){
			cin>>B[i];
			C[i+m]=B[i];
		}
		sort(C,C+k);	
		for(int i=0;i<k;i++)
			cout<<C[i]<<" ";
		cout<<endl;	
	}
}
