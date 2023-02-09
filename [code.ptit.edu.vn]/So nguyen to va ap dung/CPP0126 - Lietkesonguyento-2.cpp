#include<bits/stdc++.h>
using namespace std;
bool PRIME(long long n){
	if(n<2)
		return 0;
	if(n%2==0)
		if(n==2)
			return 1;
		else
			return 0;
	bool ok=1;
	for(long long i=3;i<=sqrt(n);i+=2){
		if(n%i==0)
			ok=0;
	}
	return ok;
}
main(){
	int T; cin>>T;
	while(T--){
		long long M,N; cin>>M>>N;
		if(M<=2)
			cout<<2<<" ";
		long long start,end;
		if(M%2==0)
			start=M+1;
		else
			start=M;
		end=N;		
		for(long long i=start;i<=end;i+=2){
			if(PRIME(i)==1)
				cout<<i<<" ";
		}
		cout<<endl;						
	}
	
}
