#include<bits/stdc++.h>
using namespace std;
string solve1(string s1, string s2){
	for(int i=0;i<s1.length();i++){
		if(s1[i]=='6')
			s1[i]='5';
	}
	for(int i=0;i<s2.length();i++){
		if(s2[i]=='6')
			s2[i]='5';
	}		
    if(s1.length()>s2.length())
        swap(s1,s2);
    string ans="";
    int n1=s1.length(), n2=s2.length(), dif=n2-n1,rem=0;
    for(int i=n1-1;i>=0;i--){
        int sum=((s1[i]-'0')+(s2[i+dif]-'0')+rem);
        ans.push_back(sum%10+'0');
        rem=sum/10;
    }
    for(int i=n2-n1-1;i>=0;i--){
        int sum=((s2[i]-'0')+rem);
        ans.push_back(sum%10+'0');
        rem=sum/10;
    }
    if(rem)
        ans.push_back(rem+'0');
    reverse(ans.begin(),ans.end());
    return ans;
}

string solve2(string s1, string s2){
	for(int i=0;i<s1.length();i++){
		if(s1[i]=='5')
			s1[i]='6';
	}	
	for(int i=0;i<s1.length();i++){
		if(s2[i]=='5')
			s2[i]='6';
	}
    if(s1.length()>s2.length())
        swap(s1,s2);
    string ans="";
    int n1=s1.length(), n2=s2.length(), dif=n2-n1,rem=0;
    for(int i=n1-1;i>=0;i--){
        int sum=((s1[i]-'0')+(s2[i+dif]-'0')+rem);
        ans.push_back(sum%10+'0');
        rem=sum/10;
    }
    for(int i=n2-n1-1;i>=0;i--){
        int sum=((s2[i]-'0')+rem);
        ans.push_back(sum%10+'0');
        rem=sum/10;
    }
    if(rem)
        ans.push_back(rem+'0');
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s1,s2;
        cin>>s1;
        cin>>s2;
        cout<<solve1(s1,s2)<<" "<<solve2(s1,s2);  
        cout<<endl;
    }
    return 0;
}
