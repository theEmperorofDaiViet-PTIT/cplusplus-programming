#include<iostream>
#include<string>
using namespace std;
main(){
	string s;
	char s1[100]={};
	getline(cin,s);	
	for(int i=0;i<s.length();i++)
		if(s[i]<=90 && s[i]>=65)
			s[i]+=32;
	s1[0]=s[0];		
	int i=0,j=1,temp;
	while(i!=-1){
		temp=i;
		i=s.find(" ",i+1);
		if(i!=-1){
			s1[j]=s[i+1];
			j++;
		}			
	}
	string name;
	for(int i=temp+1,j=0;i<s.length();i++,j++)
		name+=s[i];
	for(int i=0;i<j-1;i++)
		name+=s1[i];
	name.append("@ptit.edu.vn");
	cout<<name;	
}
