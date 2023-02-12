#include<bits/stdc++.h>
using namespace std;
main(){
	int N,K,B; cin>>N>>K>>B;
	int toang[B];
	for(int i=0;i<B;i++)
		cin>>toang[i];
	sort(toang,toang+B);
	bool ok=0; int start,end,dem=0;
	while(ok==0){
		for(int i=0,j=1;j<B;i++,j++){
			if(toang[j]-toang[i]>6){
				ok=1;
				break;
			}			
		}	
		if(ok==1)
			break;	
		for(int i=0,j=2;j<B;i++,j++){
			if(toang[j]-toang[i]>6){				
				start=i; end=j;
			}							
		}
		for(int i=end-1;i<B-1;i++){
			toang[i]=toang[i+1];
		}
		dem++;	
		B--;			
	}
	cout<<dem<<endl;			
}	
