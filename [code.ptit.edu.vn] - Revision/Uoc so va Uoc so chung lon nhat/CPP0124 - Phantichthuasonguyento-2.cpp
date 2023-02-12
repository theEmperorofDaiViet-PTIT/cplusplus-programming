#include<bits/stdc++.h>
using namespace std;
void solve(long long N){
	if(N%2==0){
		cout<<2<<" ";
		long long count=0;		
		while(N%2==0 && N/2>=1){
			count++;
			N/=2;
		}
		cout<<count<<" "<<endl;		
	}
	for(long long i=3;i<=sqrt(N);i+=2){
		if(N%i==0){
			cout<<i<<" ";
			long long count=0;
			while(N%i==0 && N/i>=1){
				count++;
				N/=i;
			}
			cout<<count<<" "<<endl;
		}	
	}
	if(N>2)
		cout<<N<<" "<<1;		
	cout<<endl;			
}
main(){
	long long N;
	cin>>N;
	solve(N);
	
}
