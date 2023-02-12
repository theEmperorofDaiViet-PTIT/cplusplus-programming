#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		int maxdem=0;
		for(int i=0;i<s.length();i++){
			int dem=0;
			for(int j=0;j<s.length();j++){
				if(s[j]==s[i]){
					dem++;
				}				
			}
			if(dem>maxdem)
				maxdem=dem;
		}
		if(maxdem>(s.length()-maxdem+1))
			cout<<0;
		else
			cout<<1;
		cout<<endl;
	}
}
