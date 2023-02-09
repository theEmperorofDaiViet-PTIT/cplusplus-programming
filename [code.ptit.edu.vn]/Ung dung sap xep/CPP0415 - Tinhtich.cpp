#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		int n,m; cin>>n>>m;
		long long A[10000],B[10000];
		for(int i=0;i<n;i++)
			cin>>A[i];
		for(int i=0;i<m;i++)
			cin>>B[i];
		sort(A,A+n,greater<long long>());
		sort(B,B+m);	
		cout<<(A[0])*(B[0])<<endl;	
	}
}
