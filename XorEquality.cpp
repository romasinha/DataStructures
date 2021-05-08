#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 

ll fastModExp(ll a, ll b, ll m){
    ll res = 1;
    while(b>0){
        if(b&1){
            res = (res*a)%m;
        }
        a = (a*a)%m;
        b = b>>1;
    }
    return res;
}

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,a, b, x, m;
        x = pow(10, 9);
        m = x+7;
        cin>>n;
        cout<<fastModExp(2, n-1, m )<<endl;
        
    }
    return 0;
    
}