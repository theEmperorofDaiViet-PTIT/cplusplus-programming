#include<bits/stdc++.h>
using namespace std;
main(){
	int n; cin>>n;
	cin.ignore();
	string s[n];
	for(int i=0;i<n;i++)
		getline(cin,s[i]);
	int count=1;	
	for(int j=1;j<n;j++){	
		if(s[0].compare(s[j])!=0)		
			count++;		
		}
	cout<<count<<endl;			
}			
	
