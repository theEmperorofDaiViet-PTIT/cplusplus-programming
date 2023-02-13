#include<bits/stdc++.h>
using namespace std;
bool PRIME(int n){
	if(n<2)
		return 0;
	if(n%2==0){
		if(n==2)
			return 1;
		else
			return 0;
	}
	bool ok=1;
	for(int i=3;i<=sqrt(n);i+=2){
		if(n%i==0){
			ok=0;
			break;
		}
	}
	if(ok==1)
		return 1;
	return 0;
}
main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		bool ok=1;
		int sum=0;
		for(int i=0;i<s.length();i+=2){
			if(s[i]%2==1){
				ok=0;
				goto next;
			}
		}
		for(int i=1;i<s.length();i+=2){
			if(s[i]%2==0){
				ok=0;
				goto next;
			}
		}
		for(int i=0;i<s.length();i++){
			sum+=(s[i]-48);
		}
		if(PRIME(sum)==0){
			ok=0;
		}
		next:
			if(ok==0){
				cout<<"NO"<<endl;
			}
			else if(ok==1){
				cout<<"YES"<<endl;
			}
	}
}
