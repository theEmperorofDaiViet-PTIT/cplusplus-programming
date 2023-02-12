#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int A[n];
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		sort(A,A+n);
		int min=INT_MAX;
		for(int i=0;i<n-1;i++){
			if(abs(A[i]-A[i+1])<min)
				min=abs(A[i]-A[i+1]);
		}
		cout<<min<<endl;
	}
}
