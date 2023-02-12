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
		int min=INT_MAX;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i!=j){
					if(abs(A[i]-A[j])<min)
						min=abs(A[i]-A[j]);
				}
			}
		}
		cout<<min<<endl;
	}
}
