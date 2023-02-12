#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		n-=2;
		long long f1=1,f2=1,fn=1;
		while(n!=0){
			fn=f1+f2;
			f1=f2;
			f2=fn;
			n--;
		}
		cout<<fn<<endl;
	}
}
