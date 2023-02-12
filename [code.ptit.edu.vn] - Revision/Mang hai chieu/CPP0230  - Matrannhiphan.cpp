#include<bits/stdc++.h>
using namespace std;
main(){
	int N; cin>>N;
	char A[N][3];
	int count;
	for(int i=0;i<N;i++){
		int dem1=0,dem0=0;
		for(int j=0;j<3;j++){
			cin>>A[i][j];
			if(A[i][j]=='1')
				dem1++;
			else if(A[i][j]=='0')
				dem0++;
		}
		if(dem1>dem0)
			 count++;		
	}
	cout<<count;
}
