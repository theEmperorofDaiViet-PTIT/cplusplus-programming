#include<bits/stdc++.h>
using namespace std;
int main(){
	int T; cin>>T;
	while(T--){
		int N,M; cin>>N>>M;		
		int a[N][M],B[N][M];
		for(int i=0;i<=N-1;i++){
			for(int j=0;j<=M-1;j++){
				cin>>a[i][j];
				B[i][j]=a[i][j];
			}	
		}
		for(int i=0;i<=N-1;i++){
			for(int j=0;j<=M-1;j++){
				if(a[i][j]==1){
					for(int k=i,h=0;h<=M-1;h++)
						B[k][h]=1;
					for(int k=0,h=j;k<=N-1;k++)
						B[k][h]=1;	
				}
			}		
		}
		for(int i=0;i<=N-1;i++){
			for(int j=0;j<=M-1;j++)
				cout<<B[i][j]<<" ";
			cout<<endl;	
		}		
	}
}
