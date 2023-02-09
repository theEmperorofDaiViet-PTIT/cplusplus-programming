#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){		
		int n; cin>>n;
		int A[n];					
		for(int i=0;i<n;i++)			
			cin>>A[i];						
		for(int i=1;i<n;i++){
			for(int j=0;j<i;j++){
				if(A[j]!=A[i])
					continue;
				else if(A[j]==A[i]){
					cout<<A[i];
					goto tiep;	
				}			
			}					
		}
		cout<<-1;
		tiep:			
		cout<<endl;	
	}
}
