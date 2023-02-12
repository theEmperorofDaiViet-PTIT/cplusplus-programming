#include<bits/stdc++.h>
using namespace std;
bool PRIME(long long N){
	if(N<2)
		return 0;
	if(N%2==0){
		if(N==2)
			return 1;
		else
			return 0;
	}
	bool ok=1;
	for(int i=3;i<=sqrt(N);i+=2){
		if(N%i==0){
			ok=0;
			break;
		}			
	}
	if(ok==1)
		return 1;
	return 0;
}
main(){
	long long N; cin>>N;
	if(PRIME(N)==1)
		cout<<"YES";
	else
		cout<<"NO";
}
