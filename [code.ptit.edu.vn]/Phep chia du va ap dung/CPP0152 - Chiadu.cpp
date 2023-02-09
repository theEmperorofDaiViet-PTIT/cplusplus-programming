#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin>>t;
	while(t--){
		int a,m,x=-1;
		cin>>a>>m;
		for(int i=0;i<m;i++){
			if((a*i)%m==1){
				x=i;
				if(x==i)
					break;
			}
		}
		cout<<x<<endl;	
	}	
}
