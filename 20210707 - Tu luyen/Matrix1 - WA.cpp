#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;	
	while(T--){
		int N,M;
		cin>>N>>M;
		int A[N][M],B[N][M];
		for(int i=0;i<N;i++)
			for(int j=0;j<M;j++){
				cin>>A[i][j];
				B[i][j]=A[i][j];
			}	
		int m=0,n=0,amount1=N,amount2=M,count=N*M;
		if(N>=3 && M>=3 && (abs(M-N))%2==0)
			count--;
		while(count>0){
			for(int i=n,j=m+1;j<M && count>0;j++,count--){
				B[i][j]=A[i][j-1];				
			}
			n++;
			for(int i=n,j=M-1;i<N && count>0;i++,count--){
				B[i][j]=A[i-1][j];				
			}
			M--;
			for(int i=N-1,j=M-1;j>=m && count>0;j--,count--){	
				B[i][j]=A[i][j+1];							
			}
			N--;
			for(int i=N-1,j=m;i>=n-1 && count>0;i--,count--){
				B[i][j]=A[i+1][j];				
			}
			m++;
			if(N==1 && M>1)
				reverse(B[N][m],B[N][M-1]);				
			else if(N>1 && M==1)
				reverse(B[n][M],B[N-1][M]);
		}
		if(amount1%2==1 && amount2%2==1)
			B[amount1/2][amount2/2]=A[amount1/2][amount2/2];				
		for(int i=0;i<amount1;i++){
			for(int j=0;j<amount2;j++)
				cout<<B[i][j]<<" ";
		}		
		cout<<endl;		
	}
}		
