#include<iostream>
using namespace std;
bool check(int n){
	bool ok=0;
	if(n==0 || n==1){
		return 1;
	}
	long long fn=1,f1=1,f0=0;
	while(fn<n){
		fn=f0+f1;
		f0=f1;
		f1=fn;
	}
	if(fn==n)
		return 1;
	return 0;	
}
main(){
	int t; cin>>t;
	while (t--){
		long long n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}	
		for(int i=0;i<n;i++){
			if(check(a[i])==1)
				cout<<a[i]<<" ";
		}		
		cout<<endl;	
	}
}
