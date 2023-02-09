#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		int A[1000],B[1000];
		for(int i=0;i<n;i++){
			cin>>A[i];
			B[i]=A[i];
		}
		sort(A,A+n);
		sort(B,B+n,greater<int>());
		int dem=n,i=0;
		while(dem>0){			
			cout<<B[i]<<" ";
			dem--;
			if(dem>0)
				cout<<A[i]<<" ";
			dem--;
			i++;	
		}
		cout<<endl;	
	}	
}
