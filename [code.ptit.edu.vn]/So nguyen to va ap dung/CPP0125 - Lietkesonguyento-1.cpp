#include<bits/stdc++.h>
using namespace std;
main(){
	long long a,b;
	cin>>a>>b;
	long long minn=min(a,b);
	if(minn<=2)
		cout<<2<<" ";
	long long j;
	if(minn%2==0)
		j=minn+1;
	else
		j=minn;
	bool ok;	
	while(j<=max(a,b)){	
		ok=1;
		if(j<=1)
			ok=0;
		for(long long i=2;i<=sqrt(j);i++){
			if(j%i==0)
				ok=0;				
		}
		if(ok==1)
			cout<<j<<" ";		
		j+=2;		
	}	
}
