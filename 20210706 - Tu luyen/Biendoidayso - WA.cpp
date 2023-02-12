#include<bits/stdc++.h>
using namespace std;
main(){
	while(1){
		int a[4];
		bool ok=0;
		for(int i=0;i<4;i++){
			cin>>a[i];
			if(a[i]!=0)
				ok=1;
		}
		if(ok==0)
			break;	
		int count=0;
		bool okay=0;
		while(okay==0){
			count++;
			for(int i=0;i<4;i++){
				int tmp=a[0];
				if(i<3)
					a[i]=abs(a[i]-a[i+1]);
				if(i==3)
					a[i]=abs(a[i]-tmp);										
			}			
			okay=1;
			for(int i=1;i<4;i++)
				if(a[i]!=a[0])
					okay=0;				
		}
		cout<<count<<endl;		
	}	
}	
