#include<bits/stdc++.h>
using namespace std;
main(){
	string s; cin>>s;
	string a[500],index=0;
	for(int i=0;i<s.length();i+=2){
		a[index]=s;
	//	a[index].append(s[i+1]);
		index++;
	}
	for(int i=0;i<=index;i++){
		cout<<a[i]<<" ";
	}
}
