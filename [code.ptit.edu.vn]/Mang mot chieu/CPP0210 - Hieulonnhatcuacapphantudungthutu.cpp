#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}	
		int max=INT_MIN;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[j]-a[i]>max && a[j]-a[i]>=0){
					max=a[j]-a[i];
				}	
			}
		}	
		if(max<0)
			cout<<-1<<endl;
		else		
			cout<<max<<endl;
	}
	return 0;
}
