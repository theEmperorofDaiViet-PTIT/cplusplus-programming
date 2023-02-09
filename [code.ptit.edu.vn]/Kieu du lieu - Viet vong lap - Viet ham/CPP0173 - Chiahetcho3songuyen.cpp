#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
long long LCM(long long a,long long b){	
	long long temp,temp1=a,temp2=b;
	while(b!=0){
		temp=b;
		b=a%b;
		a=temp;
	}
	return temp1*temp2/a;
}
main(){
	int T; cin>>T;
	while(T--){
		long long X,Y,Z,N; cin>>X>>Y>>Z>>N;	
		long long lcm1=LCM(X,Y);
		long long lcm2=LCM(lcm1,Z);		
		long long temp1=pow(10,N-1);
		long long temp2=temp1/lcm2;
		long long ans;
		if(temp1%lcm2==0)
			ans=temp1;
		else
			ans=(temp2+1)*lcm2;
		if(ans>=temp1 && ans<temp1*10)
			cout<<ans<<endl;
		else
			cout<<-1<<endl;
	}
}
