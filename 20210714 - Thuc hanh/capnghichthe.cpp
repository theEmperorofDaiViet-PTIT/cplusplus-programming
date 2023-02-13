#include<bits/stdc++.h>
using namespace std;
main(){
	int n,count=0; cin>>n; int A[n];
	for(int i=0;i<n;i++)
		cin>>A[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(A[i]<A[j])
				count++;
		}
	}
	cout<<count;
}
