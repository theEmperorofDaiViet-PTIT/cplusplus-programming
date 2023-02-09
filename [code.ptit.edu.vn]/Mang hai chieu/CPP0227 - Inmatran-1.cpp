#include<bits/stdc++.h>
using namespace std;
int main(){
	int T; cin>>T;
	while(T--){
		int N; cin>>N;
		int dem=N*N;
		int a[N][N];
		for(int i=0;i<=N-1;i++){
			for(int j=0;j<=N-1;j++)
				cin>>a[i][j];
		}
		int n=0;
		while(dem>0){
			for(int i=n,j=0;j<N && dem>0;j++){
				cout<<a[i][j]<<" ";
				dem--;			
			}
			n++;
			for(int i=n,j=N-1;j>=0 && dem>0;j--){
				cout<<a[i][j]<<" ";
				dem--;
			}
			n++;				
		}
		cout<<endl;
	}
}
