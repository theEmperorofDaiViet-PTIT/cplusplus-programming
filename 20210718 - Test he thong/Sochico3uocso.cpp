#include<bits/stdc++.h>
using namespace std;
bool PRIME(long long n){
	if(n<2)
		return 0;
	if(n%2==0){
		if(n==2)
			return 1;
		else
			return 0;
	}		
	bool ok=1;
	for(long long i=3;i<=sqrt(n);i++){
		if(n%i==0){
			ok=0;
			break;
		}			
	}
	if(ok==1)
		return 1;
	return 0;
}
main(){
	int T; cin>>T;
	while(T--){
		long long L,R,dem=0; cin>>L>>R;
		for(long long i=sqrt(L);i<=sqrt(R);i++){
			if(PRIME(i)==1)
				dem++;
		}
		
		cout<<dem<<endl;
	}
}
