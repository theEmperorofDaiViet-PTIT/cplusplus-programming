#include<bits/stdc++.h>
using namespace std;
bool check(long long N){
	if(N<2){
		return 0;
	}
	for(long long i=2;i<=sqrt(N);i++){
		if(N%i==0){
		 	return 0;
		}
	}
	return 1;
}
main(){
	int T; cin>>T;
	while(T--){
		long long N; 
		cin>>N;
		int dem=0;
		long long i=2;
		if(N==0){
			cout<<"0";
			goto next;
		}				
		
		while(N>1){
			if(check(i)==1&&N%i==0){
				N/=i;
				dem++;
			}
			else{
				i++;
			}		
		}
		if(dem==3){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
		next:
			cout<<endl;
	}
}
