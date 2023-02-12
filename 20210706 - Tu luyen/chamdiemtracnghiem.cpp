#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
main(){
	char test101[15];
	test101[0]=test101[3]=test101[7]=test101[12]='A';
	test101[1]=test101[2]=test101[8]=test101[13]='B';
	test101[5]=test101[6]=test101[10]=test101[11]='C';
	test101[4]=test101[9]=test101[14]='D';
	char test102[15];
	test102[0]=test102[3]='A';
	test102[4]=test102[8]=test102[9]=test102[13]=test102[14]='B';
	test102[1]=test102[2]=test102[5]=test102[10]='C';
	test102[6]=test102[7]=test102[11]=test102[12]='D';
	int T; cin>>T;
	while(T--){
		int code; cin>>code;
		char sub[15];
		float score=0;
		float pts=(float) 10/15;
		for(int i=0;i<15;i++)
			cin>>sub[i];
		if(code==101){
			for(int i=0;i<15;i++){
				if(sub[i]==test101[i])
					score+=pts;
			}					
		}
		else if(code==102){
			for(int i=0;i<15;i++){
				if(sub[i]==test102[i])
					score+=pts;
			}					
		}
		cout<<setprecision(2)<<fixed<<score<<endl;	
	}	
}	
