#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		int N; cin>>N;
		int dem=0;
		for(int i=1;i<=N;i++)
			if(N%i==0 && i%2==0)
				dem++;
		cout<<dem<<endl;		
	}	
}	
