#include<bits/stdc++.h>
using namespace std;
long long a[100000],n;
main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		long long b[300]={0};
		for(int i=0;i<n;i++){
			cin>>a[i];		
		}
		for(int i=0;i<n;i++){
			b[a[i]]++;
		}
		int max=0,s;
		for(int i=0;i<n;i++){
			if(b[i]>max){
				max=b[i];
				s=i;
			}
		}
		if(max>(n/2))
			cout<<s<<endl;
		else
			cout<<"NO"<<endl;
	}
}
