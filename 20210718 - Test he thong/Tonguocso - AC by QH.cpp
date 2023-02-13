#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(ll n){
    ll ans=n+1;
    if(n==1) return 1;
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0){
            if(i==(n/i))
                ans += i;
            else
                ans += (i+n/i);
        }
    }
    return ans;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
