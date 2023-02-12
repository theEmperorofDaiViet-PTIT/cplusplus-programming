#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin>>t;
	while(t--){
		int b,p; cin>>b>>p;
		int dem=0;
		if(b<=p){
			for(int i=1;i<=b;i++){
				if(((i%p)*(i%p))%p==1){
					dem++;
				}
					
			}
		}
		if(b>p){
			for(int i=1;i<=p;i++){
			if(((i%p)*(i%p))%p==1){
					dem++;
				}
				
			}
			int m1=b/p;
			dem*=m1;
			for(int i=p*m1;i<=b;i++){
				if(((i%p)*(i%p))%p==1){
					dem++;
				}
				
			}
		}
		cout<<dem<<endl;
	}
}
