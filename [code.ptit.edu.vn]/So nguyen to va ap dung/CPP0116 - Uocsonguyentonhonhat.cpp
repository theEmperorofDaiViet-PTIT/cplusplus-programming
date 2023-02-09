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
	for(int i=3;i<=sqrt(n);i+=2){
		if(n%i==0)
			ok=0;
	}
	return ok;
}
main(){
	int T; cin>>T;
	while(T--){
		int N; cin>>N;
		int a[10000];
		if(N>=1)
			a[1]=1;
		for(int i=2;i<=N;i+=2){
			a[i]=2;
		}
		for(int i=3;i<=N;i+=2){
			if(PRIME(i)==1)
				a[i]=i;
			else{
				for(int j=3;j<=i;j+=2){
					if(i%j==0 && PRIME(j)==1){
						a[i]=j;
						break;
					}
				}
			}
		}
		for(int i=1;i<=N;i++)
			cout<<a[i]<<" ";
		cout<<endl;	
	}
}
