#include <bits/stdc++.h>
using namespace std;
void test(){
	int t; cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(n==2)
			cout<<2<<endl;
		if(n>2){	
			while(n%2==0 && n/2>1)
				n/=2;			
			for(long long i=3;i<=sqrt(n);i+=2){
				while(n%i==0 && n/i>1)
					n/=i;
			}		
			cout<<n<<endl;
		}
	}
}
main(){
	test();
}
