#include<bits/stdc++.h>
using namespace std;
void solve(long long N){
	long long dem=1;
	long long count=0;		
	while(N%2==0 && N/2>=1){
		count++;
		N/=2;
	}
	dem*=count;	//cout<<dem<<endl;	
	
	for(long long i=3;i<=sqrt(N);i+=2){
		if(N%i==0){
			long long count=0;
			while(N%i==0 && N/i>=1){
				count++;
				N/=i;
			}
			dem*=(count+1);
		}	
	}
	if(N>2)
		dem*=2;		
	cout<<dem<<endl;			
}
main(){
	int t; cin>>t;
	while(t--){
		long long N; cin>>N;
		solve(N);
	}
}
