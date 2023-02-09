#include<bits/stdc++.h>
#define MAX 100000
using namespace std;
main(){
	int T;	cin>>T;
	while(T--){
		int n,k; cin>>n>>k;
		int A[MAX]; 
		for(int i=0;i<n;i++)
			cin>>A[i];
		sort(A,A+n);
		if(k<=n)
			cout<<A[k-1];
		cout<<endl;		
	}	
}
