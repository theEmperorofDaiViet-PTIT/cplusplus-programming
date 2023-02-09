#include<bits/stdc++.h>
#include<string>
using namespace std;
main(){
	int t; cin>>t;
	while(t--){
		string x,y;		
		cin>>x>>y;
		if(x.length()<y.length()){
			string temp=x;
			x=y;
			y=temp;
		}
		if(x.length()==y.length()){
			if(x.compare(y)<0){
				string temp=x;
				x=y;
				y=temp;
			}				
		}
		if(y.length()<x.length()){
			int amount=x.length()-y.length();
			for(int i=1;i<=amount;i++){
				y.insert(0,"0");
			}
		}	
		int result[x.length()]={};
		for(int i=x.length()-1,j=y.length()-1;i>=0,j>=0;i--,j--){
			if(x[i]>=y[j])
				result[i]=x[i]-y[j];
			else{
				result[i]=x[i]+10-y[j];
				y[j-1]++;
			}		
		}
		for(int i=0;i<=x.length()-1;i++)
			cout<<result[i];
		cout<<endl;		
	}
}
