#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		int n,Q; cin>>n>>Q;
		int A[10000];
		for(int i=0;i<n;i++)
			cin>>A[i];
		while(Q--){
			int L,R; cin>>L>>R;
			if(1<=L && L<=R && R<=n){
				int sum=0;
				for(int i=L-1;i<=R-1;i++)
					sum+=A[i];
				cout<<sum<<endl;	
			}				
		}	
	}	
}
