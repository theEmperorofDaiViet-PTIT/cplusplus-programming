#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	cin.ignore();
	while(T--){		
		string s;
		getline(cin,s);
		int n=s.length();
		int start=n-1,end=n-1,dem=0;		
		for(int i=n-1;i>=0;i--){
			if(s[i]==' '){
				start=i+1;
				for(int j=start;j<=end;j++)
					cout<<s[j];						
				cout<<" ";	
				end=i-1;
			}				
		}
		if(end>=0){
				for(int i=0;i<=end;i++)
					cout<<s[i];
		}
		cout<<endl;					
	}	
}
