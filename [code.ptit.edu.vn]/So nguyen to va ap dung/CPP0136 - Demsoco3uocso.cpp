#include<bits/stdc++.h>
using namespace std;
long long solve(long long N){
	long long dem=0;
	if(N>=4){
		dem++;
	}
	for(long long i=3;i<=sqrt(N);i+=2){
		bool ok=1;
		for(long long j=3;j<=sqrt(i);j+=2){
			if(i%j==0){
				ok=0;
				break;	
			}	
		}
		if(ok==1 && i*i<=N){
				dem++;
			}
	}
	return dem;
}	
main(){
	int t; cin>>t;
	while(t--){
		long long N; cin>>N;
		cout<<solve(N)<<endl;
	}
}
