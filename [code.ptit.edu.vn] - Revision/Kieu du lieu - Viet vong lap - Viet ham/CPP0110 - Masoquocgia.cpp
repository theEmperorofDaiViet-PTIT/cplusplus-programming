#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		int i=s.find("084",0);
		if(i!=-1){
			s.replace(i,3,"");
		}
		cout<<s<<endl;
	}
}
