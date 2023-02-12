#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin>>t;
	while(t--){
		char n; cin>>n;
		if(n>=65 && n<=90)
			n+=32;
		else if(n>=97 && n<=122)
			n-=32;
		cout<<n<<endl;
	}
}
