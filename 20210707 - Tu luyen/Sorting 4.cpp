#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<m;i++)
			cin>>b[i];
		int Union[m+n],Intersection[m+n],count1=0,count2=0;		
		for(int i=0;i<m;i++){
			Union[count1]=b[i];
			count1++;	
		}
		for(int i=0;i<n;i++){
			bool ok=1;
			for(int j=0;j<m;j++){
				if(a[i]==b[j]){
					Intersection[count2]=a[i];
					count2++;
					ok=0;
					if(a[i]==b[j])
						break;
				}
			}
			if(ok==1){
				Union[count1]=a[i];
				count1++;
			}					
		}
		for(int i=0;i<count1;i++){
			for(int j=i+1;j<count1;j++){
				if(Union[i]>Union[j]){
					int temp=Union[i];
					Union[i]=Union[j];
					Union[j]=temp;
				}	
			}
		}
		for(int i=0;i<count2;i++){
			for(int j=i+1;j<count2;j++){
				if(Intersection[i]>Intersection[j]){
					int temp=Intersection[i];
					Intersection[i]=Intersection[j];
					Intersection[j]=temp;
				}	
			}
		}		
		for(int i=0;i<count1;i++)
			cout<<Union[i]<<" ";
		cout<<endl;
		for(int i=0;i<count2;i++)
			cout<<Intersection[i]<<" ";
		cout<<endl;			
	}	
}	
