#include<bits/stdc++.h>
using namespace std;
long long solve(int N, int p){
	if(N%p==0 && N!=0){
		long long count=0;
		while(N%p==0 && N/p>=1){
			count++;
			N/=p;
		}
	return count;
	}
}
main(){
	int t; cin>>t;
	while(t--){
		int N,p; cin>>N>>p;
		int dem=0;
		for(int i=p;i<=N;i+=p){
			dem+=solve(i,p);
		}
		cout<<dem<<endl;
	}
}
