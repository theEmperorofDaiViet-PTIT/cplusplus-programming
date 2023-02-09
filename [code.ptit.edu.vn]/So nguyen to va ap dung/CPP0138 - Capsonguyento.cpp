#include<bits/stdc++.h>
using namespace std;
bool PRIME(int n){
	if(n<2)
		return 0;
	if(n%2==0){
		if(n==2)
			return 1;
		else
			return 0;
	}
	bool ok=1;
	for(int i=3;i<=sqrt(n);i+=2){
		if(n%i==0){
			ok=0;
			break;
		}			
	}
	if(ok==1)
		return 1;
	else
		return 0;		
}
main(){
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		for(int i=0;i<n;i++){
			if(PRIME(i) && PRIME(n-i)){
				cout<<i<<" "<<n-i;
				break;
			}
		}
		cout<<endl;
	}
}
