#include<bits/stdc++.h>
using namespace std;
long long GCD(long long a,long long b){
	long long temp;
	while(b!=0){
		temp=b;
		b=a%b;
		a=temp;
	}
	return a;	
}
long long PRIME(long long t){
	for(long long i=2;i<=sqrt(t);i++){
		if(t%i==0)
			return 0;
	}
	if(t>=2)
		return 1;		
	else
		return 0;
}		
main(){
	int T; cin>>T;
	while(T--){		
		long long x;	cin>>x;
		long long t=0;
		for(long long i=1;i<=x;i++){
			if(GCD(i,x)==1)
				t++;
		}		
		cout<<PRIME(t)<<endl;		
	}	
}
