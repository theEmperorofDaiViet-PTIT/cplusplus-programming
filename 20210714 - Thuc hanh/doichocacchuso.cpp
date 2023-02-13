#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		string s;
		cin>>s;
		bool ok=0;
		for(int i=s.length()-1;i>0;i--){
			for(int j=i-1;j>=0;j--){
				if(s[j]>s[i]){
					if(j==0 && s[i]=='0')
						continue;
					swap(s[j],s[i]);
					ok=1;
					goto tiep;
				}
			}

		}
		tiep:
		if(ok==1)
			cout<<s<<endl;
		else
			cout<<-1<<endl;	
	}
}
