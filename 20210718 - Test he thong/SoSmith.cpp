#include<bits/stdc++.h>
using namespace std;
long long sum(long long n){
	long long sum=0;
	while(n>0){
		sum+=(n%10);
		n/=10;
	}
	return sum;
}

main(){
	long long n; cin>>n;	
	long long sum2=0,sum1=sum(n);
	while(n%2==0){
		sum2+=2;
		n/=2;
	}
	for(int i=3;i<=sqrt(n);i+=2){
		while(n%i==0){
			sum2+=sum(i);
			n/=i;
		}
	}
	if(n>1)
		sum2+=sum(n);
	if(sum2==sum1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
