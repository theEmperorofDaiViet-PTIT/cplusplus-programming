#include<bits/stdc++.h>
using namespace std;
int main(){
	int T; cin>>T;
	while(T--){
		int N; cin>>N;
		string a[N][N];
		for(int i=0;i<=N-1;i++){
			for(int j=0;j<=N-1;j++)
				cin>>a[i][j];
		}
		for(int i=1;i<=N-2;i++){
			for(int j=1;j<=N-2;j++)
				a[i][j]=32;
		}
		for(int i=0;i<=N-1;i++){
			for(int j=0;j<=N-1;j++){
				cout<<a[i][j]<<" ";
			}	
			cout<<endl;	
	}
}
}