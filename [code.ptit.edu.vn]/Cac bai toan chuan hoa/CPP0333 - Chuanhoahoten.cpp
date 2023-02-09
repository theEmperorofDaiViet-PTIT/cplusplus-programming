#include<bits/stdc++.h>
using namespace std;
main(){
	string s;
	getline(cin,s);
	if(s[0]>=97 && s[0]<=122)
		s[0]-=32;
	for(int i=1;i<=s.length();i++){
		if(s[i]>=65 && s[i]<=90)
			s[i]+=32;
	}
	int i=0,temp;
	while(i!=-1){
		temp=i;
		i=s.find(" ",i+1);
		if(i!=-1)
			s[i+1]-=32;
	}
	for(int i=temp+2;i<=s.length();i++)
		s[i]-=32;
	s.insert(temp,",");
	cout<<s;
					
}
