#include<iostream>
#include<string>
using namespace std;
void Sinh(int n){
	string s;
	for(int i=0;i<=n-1;i++){
		s[i]='0';
		cout<<s[i];
	}
	cout<<" ";
	for(int i=n-1;i>=0;i--){
			if(s[i]=='0'){
				s[i]='1';
			for(int j=i+1;j<=n-1;j++)
				s[j]='0';
			for(int i=0;i<=n-1;i++)
				cout<<s[i];
			cout<<" ";
			i=n;
			}			
		}		
}
main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		Sinh(n);
		cout<<endl;
	}
}
