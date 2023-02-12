#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin>>t;
	while(t--){
		string s,s1; cin>>s;
		s1=s;
		reverse(s1.begin(),s1.end());
		bool ok=1;
		int l=(s.length())/2+1;
		for(int i=0;i<l;i++){
			if(s[i]%2==1){
				ok=0;
				break;
			}
		}
		if(s==s1 && ok==1)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<endl;
	}
}
