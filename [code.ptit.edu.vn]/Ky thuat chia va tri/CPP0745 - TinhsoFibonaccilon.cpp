#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
long long Fibonacci(int n)
{
    long long a1=0,a2=1;
    if (n==0 || n==1)
        return 1;
    long long i=2,a;
    while(i<=n)
    {
        a=a1%M+a2%M;
        a1=a2;
        a2=a;
        i++;
    }
    return a%M;
}
main()
{
    int t; cin>>t;
    while(t--){
    	int n; cin>>n;
    	cout<<Fibonacci(n)<<endl;
    }
}
