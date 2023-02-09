#include<bits/stdc++.h>
using namespace std;
int solve(int N,int S,long long K){
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
		if(S==K)
			return 1;
		else
			return 0;
}	
int main(){
	int t; cin>>t;
	while(t--){
		int N,S=0; long long K;
		cin>>N>>K;
		cout<<solve(N,S,K);
		cout<<endl;
	}	
}
