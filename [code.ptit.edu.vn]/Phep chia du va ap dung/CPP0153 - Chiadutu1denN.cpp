#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin>>t;
	while(t--){
		int N,S=0; long long K;
		cin>>N>>K;
		if(N<=K){
			for(int i=1;i<=N;i++)
				S+=i;
		}
		if(N>K){
			for(int i=1;i<K;i++)
				S+=i;
			int a=N/K;
			S*=a;
			for(int i=1;i<=N-a*K;i++){
				S+=i;	
			}		
		}	
		cout<<S<<endl;
	}	
}
