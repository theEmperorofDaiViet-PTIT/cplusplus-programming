#include<bits/stdc++.h>
using namespace std;
main(){
	int N; cin>>N; int A[N+1][N+1];
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			cin>>A[i][j];
		}
	}
	int M; cin>>M; int B[M+1][M+1];
	int div=N/M;
	for(int i=1;i<=M;i++){
		for(int j=1;j<=M;j++){
			cin>>B[i][j];
		}
	}
	int C[N+1][N+1];
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			int h=i%M,k=j%M;
			if(h==0)
				h=M;
			if(k==0)
				k=M;
			C[i][j]=A[i][j]*B[h][k];
		}
	}
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			cout<<C[i][j]<<" ";
			if(j==N)
				cout<<endl;
		}
	}
}
