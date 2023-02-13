#include<bits/stdc++.h>
using namespace std;
main(){
	int N; cin>>N;
	int A[N+1][N+1];
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			cin>>A[i][j];
		}
	}
	int K; cin>>K;
	int sumtren=0,sumduoi=0;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			if(i<N+1-j)
				sumtren+=A[i][j];
			else if(i>N+1-j)
				sumduoi+=A[i][j];
		}	
	}
	int d=abs(sumtren-sumduoi);
	if(d<=K)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	cout<<d<<endl;
}
