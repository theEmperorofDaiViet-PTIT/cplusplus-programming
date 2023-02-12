#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		int N; cin>>N;
		int a[N];
		for(int i=0;i<N;i++)
			cin>>a[i];
		int count=0;
		for(int i=0;i<N;i++){
			bool ok=1;
			for(int j=0;j<N;j++){
				if(a[i]==a[j] && i!=j){
					ok=0;
					if(ok==0)
						break;
				}					
			}
			if(ok==1)
				count++;
		}
		cout<<N-count<<endl;			
	}	
}	
