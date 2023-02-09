#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		int n,k; cin>>n>>k;
		int A[100];
		for(int i=0;i<n;i++)
			cin>>A[i];
		int dem=0;
		bool daxet[n]={};
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(j!=i && daxet[j]==0)
					if(A[i]+A[j]==k)
						dem++;					
			}
			daxet[i]=1;
		}
		cout<<dem<<endl;	
	}	
}
