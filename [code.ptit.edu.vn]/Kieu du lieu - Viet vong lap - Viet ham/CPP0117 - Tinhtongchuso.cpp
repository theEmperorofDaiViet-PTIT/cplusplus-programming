#include<bits/stdc++.h>
using namespace std;
long long process(long long &n){
	long long sum=0;
	while(n>0){
		long long temp=(n%10);
		sum+=temp;
		n/=10;
	}
	n=sum;
	return sum;	
}	
main(){
	int T; cin>>T;
	while(T--){
		long long n; cin>>n;
		while(n>=10){
			process(n);
		}
		cout<<n<<endl;
	}		
}
