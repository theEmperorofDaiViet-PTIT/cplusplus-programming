#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){		
		int n; cin>>n;
		
			long long A[n];				
			for(int i=0;i<n;i++)			
				cin>>A[i];
			long long min=1000000;			
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(i!=j && abs(A[i]+A[j])<abs(min) &&abs(A[i]+A[j])>0)
						min=A[i]+A[j];
				}		
			}
			cout<<min;
		
		cout<<endl;	
	}
}
