#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		int N; cin>>N;
		int A[N];
		for(int i=0;i<N;i++){
			cin>>A[i];
		}
		cout<<A[0]*A[1]<<" ";
		for(int i=1;i<=N-2;i++)
			cout<<A[i-1]*A[i+1]<<" ";
		cout<<A[N-2]*A[N-1]<<endl;
	}
}
