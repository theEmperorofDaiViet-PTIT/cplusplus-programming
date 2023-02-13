#include<bits/stdc++.h>
using namespace std;
int a[100],b[100],n;
main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
			cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		int temp=0;
		for(int i=0;i<n;i++){
			if(a[i]>b[i]){
				temp=1;
				break;
			}
		}
		if(temp==0) cout<<"YES";
		else cout<<"NO";
			cout<<endl;
	}
}
