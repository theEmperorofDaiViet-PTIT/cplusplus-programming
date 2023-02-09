#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		int N,k; cin>>N>>k;
		int A[N+1][N+1],B[(N+1)*(N+1)],dem=0;
		for(int i=1;i<=N;i++){
			for(int j=1;j<=N;j++){
				cin>>A[i][j];
				dem++;
				B[dem]=A[i][j];
			}
		}
		int m=N*N;
		sort(B+1,B+1+m);		
		cout<<B[k]<<endl;
	}
}
