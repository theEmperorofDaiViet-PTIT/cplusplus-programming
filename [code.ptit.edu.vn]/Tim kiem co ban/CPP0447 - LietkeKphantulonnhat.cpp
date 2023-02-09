#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		int n,k; cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)	
			cin>>a[i];
		while(k--){
			int index,max=0;
			for(int i=0;i<n;i++){
				if(a[i]>max){
					max=a[i];
					index=i;
				}	
			}
			cout<<max<<" ";
			a[index]=0;	
		}
		cout<<endl;	
	}
}
