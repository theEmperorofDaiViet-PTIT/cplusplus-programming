#include<bits/stdc++.h>
#define MAX 100000
using namespace std;
main(){
	int T;	cin>>T;
	while(T--){
		int n; cin>>n;
		int A[MAX]; 
		for(int i=0;i<n;i++)
			cin>>A[i];
		sort(A,A+n,greater<int>());
		cout<<A[0]<<endl;				
	}	
}
