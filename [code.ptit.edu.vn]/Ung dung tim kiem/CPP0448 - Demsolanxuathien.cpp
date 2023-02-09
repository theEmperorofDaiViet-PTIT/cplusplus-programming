#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){		
		int n,x; cin>>n>>x;
		int A[n],dem=0;					
		for(int i=0;i<n;i++)			
			cin>>A[i];
		sort(A,A+n);				
		for(int i=0;i<n;i++){
			if(A[i]!=x)
				continue;
			else
				dem++;						
		}
		if(dem==0)
			cout<<-1;
		else
			cout<<dem;	
		cout<<endl;	
	}
}
