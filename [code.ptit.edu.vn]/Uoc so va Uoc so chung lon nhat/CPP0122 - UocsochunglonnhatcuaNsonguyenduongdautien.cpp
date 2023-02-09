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
long long LCM(long long a, long long b){
	return a*b/GCD(a,b);
}
main(){
	int t; cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a=1;
		for(long long i=2;i<=n;i++)
			a=LCM(a,i);
		cout<<a<<endl;
	}
}
