#include<bits/stdc++.h>
using namespace std;
long long result;
long long Giaithua(int m){	
	for(int i=1;i<=m;i++)
		result*=i;
	return result;
}
main(){
	int n; long long sum=0; cin>>n;
	for(int i=1;i<=n;i++){
		result=1;
		sum+=Giaithua(i);
	}
	cout<<sum;
}
