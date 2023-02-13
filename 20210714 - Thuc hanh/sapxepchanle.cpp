#include<bits/stdc++.h>
using namespace std;
main(){
	int n; cin>>n;
	int A[n];
	bool B[n]={};
	int even[n],demchan=0;
	int odd[n],demle=0;
	for(int i=0;i<n;i++){
		cin>>A[i];
		if(A[i]%2==1){
			B[i]=1;
			odd[demle]=A[i];
			demle++;
		}
		else{
			even[demchan]=A[i];
			demchan++;
		}
	}
	
	sort(odd,odd+demle,greater<int>());
	sort(even,even+demchan);
	for(int i=0,j=0,k=0;i<n;i++){
		if(B[i]==0){
			cout<<even[j]<<" ";
			j++;
	}
		else{
			cout<<odd[k]<<" ";
			k++;
		}
	}
}
