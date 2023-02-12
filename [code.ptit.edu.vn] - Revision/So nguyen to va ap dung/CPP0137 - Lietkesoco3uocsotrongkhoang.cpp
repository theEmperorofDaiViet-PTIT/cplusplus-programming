#include<bits/stdc++.h>
using namespace std;
long long solve(long long L,long long R){
	long long dem=0;
	if(R>=4 && L<=4){
		dem++;
	}
//	cout<<dem<<" ";
	int start=(int)sqrt(L);
	if(start%2==0)
		start++;
	for(long long i=start;i<=sqrt(R);i+=2){
		bool ok;
		if(i>1)
			ok=1;
		
		else
			ok=0;
		for(long long j=3;j<=sqrt(i);j+=2){
			if(i%j==0){
				ok=0;
				break;	
			}	
		}
		if(ok==1 && i*i<=R){
				dem++;
			}
	}
	return dem;
}	
main(){
	int t; cin>>t;
	while(t--){
		long long L,R; cin>>L>>R;
		cout<<solve(L,R)<<endl;
	}
}
