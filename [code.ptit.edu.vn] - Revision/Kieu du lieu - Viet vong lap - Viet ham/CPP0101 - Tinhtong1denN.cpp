#include<bits/stdc++.h>
using namespace std;
long long n,sum;
long long Tinhtong(long long i){
	if(i>n)
		return sum;
	else{
		sum+=i;
		Tinhtong(i+1);
	}
}
main(){
	int t; cin>>t;
	if(t<=10){
	while(t--){
		cin>>n;	sum=0;
		cout<<Tinhtong(1)<<endl;
	}
	}
}
