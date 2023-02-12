#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin>>t;
	char De101[15]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
	char De102[15]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
	while(t--){
		int Madethi;
		char Baithi[15]; float Diemthi=0;
		cin>>Madethi;
		if(Madethi==101){
			for(int i=0;i<15;i++){
				cin>>Baithi[i];
				if(Baithi[i]==De101[i])
					Diemthi+=(float)2/3;
			}
		}
		else if(Madethi==102){
			for(int i=0;i<15;i++){
				cin>>Baithi[i];
				if(Baithi[i]==De102[i])
					Diemthi+=(float)2/3;
			}
		}
		cout<<fixed<<setprecision(2)<<Diemthi<<endl;
	}
}
