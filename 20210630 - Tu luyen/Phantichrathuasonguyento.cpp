#include<bits/stdc++.h>
using namespace std;
void solve(int n){
	int dem2=0;
	while(n%2==0){
		dem2++;
		n/=2;
	}
	if(dem2!=0)
		cout<<2<<" "<<dem2<<endl;
	for(int i=3;i<=sqrt(n);i+=2){
		int dem=0;
		while(n%i==0){
			dem++;
			n/=i;
		}
		if(dem!=0){
			cout<<i;
			if(dem>=1) cout<<" "<<dem;
			if(n>i) cout<<" ";
			cout<<endl;
		}	
	}	
	if(n>2)
		cout<<n<<" "<<1<<endl;	
}
main(){
	int n; cin>>n;
	solve(n);
}
