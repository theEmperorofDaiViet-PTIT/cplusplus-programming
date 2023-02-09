#include<bits/stdc++.h>
#define MAX 10000
using namespace std;
main(){
	int T; cin>>T;
	while(T--){	
		int n; cin>>n;
		int count0=0;
		while(n--){
			long long m; cin>>m;		
			if(m!=0)
				cout<<m<<" ";			
			else
				count0++;			
		}
		for(int i=0;i<count0;i++)
			cout<<0<<" ";
		cout<<endl;		
	}	
}
