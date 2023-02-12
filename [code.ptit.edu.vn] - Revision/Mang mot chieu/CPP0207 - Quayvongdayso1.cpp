#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin>>t;
	while(t--){
		int n,d; cin>>n>>d;
		int A[n];
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		int B[n];
		for(int i=0;i<n-d;i++){
			B[i]=A[i+d];
		}
		for(int i=n-d;i<n;i++){
			B[i]=A[i-(n-d)];
		}
		for(int i=0;i<n;i++){
			cout<<B[i]<<" ";
		}
		cout<<endl;
	}
}
