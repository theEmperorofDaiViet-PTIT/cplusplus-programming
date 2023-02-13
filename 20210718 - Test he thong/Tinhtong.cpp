#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		string s1,s2;
		cin>>s1>>s2;
		string s3=s1,s4=s2;
		for(int i=0;i<s1.length();i++){
			if(s1[i]=='6')
				s1[i]='5';
		}
		for(int i=0;i<s2.length();i++){
			if(s2[i]=='6')
				s2[i]='5';
		}
		if(s1.length()<s2.length())
			swap(s1,s2);
		for(int i=1;i<=s1.length()-s2.length();i++){
			s2.insert(0,"0");
		}
		int sum1[s1.length()]={},sum2[s3.length()]={};
		for(int i=s1.length()-1;i>=0;i--){
			s1[i]-=48;
			s2[i]-=48;			
		}
		for(int i=s1.length()-1;i>=0;i--){		
			if(s1[i]+s2[i]>=10){
				if(i==0)
					sum1[i]=s1[i]+s2[i];
				else{
					sum1[i]=(s1[i]+s2[i])%10;
					s2[i-1]++;
				}
			}
			else
				sum1[i]=s1[i]+s2[i];				
		}
		for(int i=0;i<s1.length();i++)
			cout<<sum1[i];
		cout<<" ";
			if(s3.length()<s4.length())
			swap(s3,s4);
		for(int i=0;i<s3.length();i++){
			if(s3[i]=='5')
				s3[i]='6';
		}
		for(int i=0;i<s4.length();i++){
			if(s4[i]=='5')
				s4[i]='6';
		}
			for(int i=1;i<=s3.length()-s4.length();i++){
			s4.insert(0,"0");
		}	
		for(int i=s3.length()-1;i>=0;i--){
			s3[i]-=48;
			s4[i]-=48;			
		}
		for(int i=s3.length()-1;i>=0;i--){		
			if(s3[i]+s4[i]>=10){
				if(i==0)
					sum2[i]=s3[i]+s4[i];
				else{
					sum2[i]=(s3[i]+s4[i])%10;
					s4[i-1]++;
				}
			}
			else
				sum2[i]=s3[i]+s4[i];				
		}
		for(int i=0;i<s3.length();i++)
			cout<<sum2[i];
		cout<<" ";
		cout<<endl;
	}
}
