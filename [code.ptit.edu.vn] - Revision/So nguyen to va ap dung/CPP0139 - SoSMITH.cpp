#include<bits/stdc++.h>
using namespace std;
bool PRIME(long long N){
	if(N<2)
		return 0;
	if(N%2==0){
		if(N==2)
			return 1;
		else
			return 0;
	}
	bool ok=1;
	for(long long i=3;i<=sqrt(N);i+=2){
		if(N%i==0){
			ok=0;
			break;
		}
	}
	if(ok==1)
		return 1;
	return 0;
}
int solve(long long N){
	int sum=0;
	if(N%2==0){
		int count=0;
		while(N%2==0 && N/2>=1){
			count++;
			N/=2;
		}
		while(count--)
			sum+=2;
	}
	for(long long i=3;i<=sqrt(N);i+=2){
		if(N%i==0){
			int count=0,sum2=0;
			while(N%i==0 && N/i>=1){
				count++;
				N/=i;
			}
			while(i>0){
				sum2+=(i%10);
				i/=10;
			}
			sum=sum+sum2*count;
		}
	}
	if(N>2){
		while(N>0){
			sum+=(N%10);
			N/=10;
		}	
	}
	return sum;
}
main(){
	int t; cin>>t;
	while(t--){
		long long N; cin>>N; long long temp=N;
	//	if(PRIME(N)==1)
	//		cout<<"NO"<<endl;
		if(PRIME(N)==0){
			int sumN=0;
			while(temp>0){
				sumN+=(N%10);
				temp/=10;
			}
			if(solve(N)==sumN)
				cout<<"YES"<<endl;
		//	else
		//		cout<<"NO"<<endl;
		}
	}
}
