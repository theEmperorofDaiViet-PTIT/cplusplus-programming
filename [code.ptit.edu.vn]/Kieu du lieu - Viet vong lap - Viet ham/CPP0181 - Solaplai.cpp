#include<bits/stdc++.h>
using namespace std;
long long GCD(long long a, long long b){
	long long temp;
	while(b!=0){
		temp=b;
		b=a%b;
		a=temp;
	}
	return a;	
} 
main(){
	int T; cin>>T;
	while(T--){
		long long a,x,y; cin>>a>>x>>y;				
		long long amount=GCD(x,y);
		for(long long i=1;i<=amount;i++)
			cout<<a;	
		cout<<endl;		
	}
}
