#include<bits/stdc++.h>
using namespace std;
void test(int N){
	if(N==2)
		cout<<N<<endl;
	if(N>2){
		bool ok;	
		cout<<2<<" ";
		for(int i=3;i<=N;i+=2){
			ok=1;
			for(int j=2;j<=sqrt(i);j++){
				if(i%j==0)
					ok=0;						
			}
			if(ok==1)
				cout<<i<<" ";
		}
		cout<<endl;		
	}		
}
main(){
	int t; cin>>t;
	while(t--){
		int N; cin>>N;
		test(N);
	}
}
