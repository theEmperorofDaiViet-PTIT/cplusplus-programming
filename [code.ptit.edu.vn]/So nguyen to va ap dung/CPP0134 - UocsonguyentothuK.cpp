#include<bits/stdc++.h>
using namespace std;
void solve(int N, int k){
	int divisor=-1, count=0;
	while(N%2==0 && count<k){
		divisor=2;
		count++;
		N/=2;
	}
	for(int i=3;i<=sqrt(N);i+=2){
		while(N%i==0 && count<k){
			divisor=i;
			count++;
			N/=i;
		}
	}
	if(N>2 && count<k){
		divisor=N;
		count++;	
	}
	if(count==k)
		cout<<divisor<<endl;
	if(count!=k)
		cout<<-1<<endl;
								
}
main(){
	int t; cin>>t;
	while(t--){
		int N,k; cin>>N>>k;
		solve(N,k);
	}	
}
