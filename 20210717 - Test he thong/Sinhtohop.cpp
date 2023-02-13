#include<bits/stdc++.h>
using namespace std;
main(){
	int n,k; cin>>n>>k;
	int a[n+1];
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
	bool ok=1;
	while(ok==1){
		for(int i=1;i<=k;i++)
			cout<<a[i]<<" ";
		cout<<endl;
		int i=k;
		for(;i>0 && a[i]==n-k+i;i--){
		}
		if(i>0){
			a[i]++;
			for(int j=i+1;j<=k;j++)
				a[j]=a[i]+j-i;
		}
		else
			ok=0;
	}
}
