#include<bits/stdc++.h>
using namespace std;
main(){
	int T,Test=1; cin>>T;	
	while(T--){
		int N,M;
		cin>>N>>M;
		int A[N][M];
		for(int i=0;i<N;i++)
			for(int j=0;j<M;j++)
				cin>>A[i][j];
		int B[M][N];
		for(int i=0;i<M;i++)
			for(int j=0;j<N;j++)
				B[i][j]=A[j][i];
		int C[N][N]={};
		for(int i=0;i<N;i++)
			for(int j=0;j<N;j++)
				for(int k=0;k<M;k++)
					C[i][j]+=(A[i][k]*B[k][j]);		 								
		cout<<"Test "<<Test<<":"<<endl;
		Test++;			
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++)
				cout<<C[i][j]<<" ";
			cout<<endl;							
		}					
	}	
}	
