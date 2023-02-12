#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		int N; cin>>N;
		long long a[N];
		for(int i=0;i<N;i++)
			cin>>a[i];
		sort(a,a+N);
		for(int i=3;i<N;i++){
			for(int j=0;j<i-1;j++){
				for(int k=j;k<i;k++){
					if(pow(a[j],2)+pow(a[k],2)==pow(a[i],2)){
						cout<<"YES"<<endl;
						goto tiep;
					}	
				}	
			}	
		}
		cout<<"NO"<<endl;
		tiep:
			continue; 
	}	
}	
