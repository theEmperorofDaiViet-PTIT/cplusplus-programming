#include<bits/stdc++.h>
using namespace std;
long long process(long long N){
	if(N%2==0)
		return 2;
	for(int i=3;i<=N;i+=2){
		if(N%i==0)
			return i;
	}
}
main(){
	int T; cin>>T;
	while(T--){
		long long N; cin>>N;
			cout<<1<<" ";
		for(int i=2;i<=N;i++){
			cout<<process(i)<<" ";
		}
		cout<<endl;
	}
}
