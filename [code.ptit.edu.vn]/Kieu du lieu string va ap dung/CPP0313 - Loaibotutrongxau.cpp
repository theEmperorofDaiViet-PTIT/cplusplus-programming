#include<bits/stdc++.h>
using namespace std;
main(){
	string s;
	getline(cin,s);
	string s2;
	getline(cin,s2);
	s.replace(s.find(s2,0),s2.length()+1,"");
	if(s[0]>=97 && s[0]<=122)
		s[0]-=32;
	cout<<s;
}
