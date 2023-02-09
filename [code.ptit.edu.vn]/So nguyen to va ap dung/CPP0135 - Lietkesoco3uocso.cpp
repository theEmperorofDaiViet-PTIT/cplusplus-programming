#include<bits/stdc++.h>
using namespace std;
void solve(long long N){
	if(N>=4){
		cout<<4<<" ";
	}
	for(long long i=3;i<=sqrt(N);i+=2){
		bool ok=1;
		for(long long j=3;j<=sqrt(i);j+=2){
			if(i%j==0){
				ok=0;	
			}	
		}
		if(ok==1 && i*i<=N){
				cout<<i*i<<" ";
			}
	}
	cout<<endl;
}	
main(){
	int t; cin>>t;
	while(t--){
		long long N; cin>>N;
		solve(N);
	}
}
