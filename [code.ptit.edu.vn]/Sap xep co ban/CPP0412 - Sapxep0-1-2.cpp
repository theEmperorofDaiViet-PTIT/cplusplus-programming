#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		int B[1000];
		for(int i=0;i<n;i++){
			cin>>B[i];			
		}
		sort(B,B+n);
		for(int i=0;i<n;i++)
			cout<<B[i]<<" ";
		cout<<endl;	
	}	
}
