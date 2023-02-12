#include<bits/stdc++.h>
using namespace std;
bool check(int n){
	int odd=0,even=0;
	while(n!=0){
		if((n%10)%2==0)
			even++;
		else if((n%10)%2==1)
			odd++;
		n/=10;
	}
	if(even==odd)
		return 1;
	return 0;
}
main(){
	int m; cin>>m;
	int dem=0;
	for(int i=pow(10,m-1);i<pow(10,m);i++){
		if(check(i)==1){
			cout<<i<<" ";
			dem++;
			if(dem==10){
				cout<<endl;
				dem=0;
			}
				
		}			
	}
}
