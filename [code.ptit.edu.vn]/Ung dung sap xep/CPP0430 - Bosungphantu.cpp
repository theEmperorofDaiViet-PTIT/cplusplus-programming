#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		int n,A[10000]; cin>>n;	
		int m=n;	
		for(int i=0;i<n;i++)
			cin>>A[i];
		sort(A,A+n);
		bool daxet[n]={};		
		for(int i=0;i<n;i++){
			daxet[i]=1;			
			for(int j=0;j<n;j++){
				if(A[i]==A[j] && j!=i && daxet[j]==0){
					m--;
					daxet[j]=1;	
				}									
			}			
		}
		cout<<A[n-1]-A[0]+1-m<<endl;		
	}	
}
