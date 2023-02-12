#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int A[n];
		for(int i=0;i<n;i++)
			cin>>A[i];
		sort(A,A+n);
		int dem=0;
		for(int i=0;i<n-1;){
			for(int j=i+1;j<n;j++){
				if(A[i]!=A[j]){
					i=j;
					break;
				}				
				else{
					if(j==i+1)
						dem=dem+2;
					else
						dem++;
				//	j++;
				}
				
			}
		}
		cout<<dem<<endl;
	}
}
