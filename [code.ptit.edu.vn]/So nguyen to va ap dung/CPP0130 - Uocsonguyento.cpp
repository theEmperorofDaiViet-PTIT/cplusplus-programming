#include <bits/stdc++.h>
using namespace std;
void test(){
	int t; cin>>t;
	while(t--){
		long long n;
		cin>>n;
		while (n%2==0){
			cout<<2<<" ";
			n/=2;
			}
		for(long long i=3;i<=sqrt(n);i+=2){
			while(n%i==0){
				cout<<i<<" ";n=n/i;
			}
		}
		if(n>2)
			cout<<n;
			cout<<endl;
		}
}
main(){
	test();
}
