#include<bits/stdc++.h>
using namespace std;
int main(){
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int min=10000000;
		int index=0;
		for(int i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
			index=i;
		}	
		if(i==n-1 && min==10000000)
			min=-1;
	}
	int min1=min;
	a[index]=10000000;
	min=10000000;
	for(int i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}	
		if(i==n-1 && min==10000000)
			min=-1;
	}
	if(min!=min1)
		cout<<min1<<" "<<min<<endl;
	else
		cout<<-1<<endl;
	}
}