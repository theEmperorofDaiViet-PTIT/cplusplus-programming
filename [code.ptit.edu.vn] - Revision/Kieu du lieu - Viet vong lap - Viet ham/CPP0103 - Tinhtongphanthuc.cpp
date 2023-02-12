#include<bits/stdc++.h>
using namespace std;
main(){
	int n; cin>>n;
	double sum=0;
	for(int i=1;i<=n;i++)
		sum+=(double)1/i;
	cout<<fixed<<setprecision(4)<<(double)sum;
}
