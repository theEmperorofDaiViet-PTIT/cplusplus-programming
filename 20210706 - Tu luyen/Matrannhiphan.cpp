#include<bits/stdc++.h>
using namespace std;
main(){
	int N;
	cin>>N;
	int a[N][3];
	for(int i=0;i<N;i++)
		for(int j=0;j<3;j++)
			cin>>a[i][j];
	int count=0;		
	for(int i=0;i<N;i++){
		int count0=0,count1=0;
		for(int j=0;j<3;j++){
			if(a[i][j]==0)
				count0++;
			else if(a[i][j]==1)
				count1++;	
		}
		if(count1>count0)
			count++;	
	}
	cout<<count<<endl;		
}	
