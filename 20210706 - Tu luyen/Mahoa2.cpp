#include<bits/stdc++.h>
using namespace std;
main(){
	string P="ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
	while(1){
		int K;	cin>>K;
		if(K==0)
			break;
		string s; cin>>s;
		for(int i=0;i<s.length();i++){
			for(int j=0;j<P.length();j++){
				if(s[i]==P[j]){
					s[i]=P[(j+K)%28];
					if(s[i]==P[(j+K)%28])
						break;
				}	
			}	
		}
		reverse(s.begin(),s.end());
		cout<<s<<endl;	
	}	
}	
