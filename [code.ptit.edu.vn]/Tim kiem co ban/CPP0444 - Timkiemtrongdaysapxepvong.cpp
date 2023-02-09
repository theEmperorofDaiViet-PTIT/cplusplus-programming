#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){		
		int n,x; cin>>n>>x;
		int A[n];				
		for(int i=0;i<n;i++){			
			cin>>A[i];				
		}			
		for(int i=0;i<n;i++){
			if(A[i]==x){
				cout<<i+1;
				break;	
			}			
		}
		cout<<endl;	
	}	
}
