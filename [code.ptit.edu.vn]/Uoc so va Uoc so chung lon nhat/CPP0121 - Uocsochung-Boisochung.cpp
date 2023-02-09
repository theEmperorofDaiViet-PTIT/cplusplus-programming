#include<iostream>
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
main(){
	long long t; cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		long long LCM=a*b/GCD(a,b);
		cout<<LCM<<" "<<GCD(a,b)<<endl;
	}
}
