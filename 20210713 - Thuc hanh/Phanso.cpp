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
	int T,dem=1; cin>>T;
	while(T--){	
		long long p1,p2,q1,q2;
		cin>>p1>>p2>>q1>>q2;	
		//if(p2==0 || q2==0 || q1==0)
		//	continue;
		cout<<"Case #"<<dem<<":"<<endl;
		dem++;
	
		long long P1,P2,Q1,Q2;
		if(q2>=p2 && q2%p2==0){
			P1=p1*q2/p2; P2=p2*q2/p2; Q1=q1; Q2=q2;
			cout<<P1<<"/"<<P2<<" "<<Q1<<"/"<<Q2<<endl;
		}
		else if(p2>q2 && p2%q2==0){
			P1=p1; P2=p2; Q1=q1*p2/q2; Q2=q2*p2/q2;
			cout<<P1<<"/"<<P2<<" "<<Q1<<"/"<<Q2<<endl;
		}
		else{
			P1=p1*q2; P2=p2*q2; Q1=q1*p2; Q2=q2*p2;
			cout<<P1<<"/"<<P2<<" "<<Q1<<"/"<<Q2<<endl;
		}
		long long sum1,sum2;	
		sum1=(P1+Q1)/GCD(P1+Q1,P2);
		sum2=(P2)/GCD(P1+Q1,P2);
		cout<<sum1<<"/"<<sum2<<endl;
		long long div1,div2;
		div1=P1*Q2/GCD(P1*Q2,P2*Q1);
		div2=P2*Q1/GCD(P1*Q2,P2*Q1);
		cout<<div1<<"/"<<div2<<endl;
	}	
}
