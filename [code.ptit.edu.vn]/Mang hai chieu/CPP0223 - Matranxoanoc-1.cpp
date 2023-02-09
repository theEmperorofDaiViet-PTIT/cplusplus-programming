#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		int N,M;
		cin>>N>>M;
		int a[N][M];
		int count=N*M;	
		for(int i=0;i<N;i++)
			for(int j=0;j<M;j++)
				cin>>a[i][j];
		int m=0,n=0;		
		while(count>0){				
			for(int i=n,j=m;j<=M-1 && count>0;j++,count--){
				cout<<a[i][j]<<" ";			
			}
			n++;	
			for(int i=n,j=M-1;i<=N-1 && count>0;i++,count--){		
				cout<<a[i][j]<<" ";		
			}
			M--;	
			for(int i=N-1,j=M-1;j>=m && count>0;j--,count--){
				cout<<a[i][j]<<" ";				
			}
			N--;
			for(int i=N-1,j=m;i>=n && count>0;i--,count--){
				cout<<a[i][j]<<" ";			
			}
			m++;
		}
		cout<<endl;				
	}	
}
