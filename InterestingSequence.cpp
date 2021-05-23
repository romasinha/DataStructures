#include <bits/stdc++.h> 
using namespace std; 

long long int gcd(long long int a, long long int b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int k, a, b, res=0;
        cin>>k;
        for(int i=1; i<=2*k; i++){
            a = k+(i*i);
            b = 2*i+1;
            gcd(a,b);
            res += gcd(a,b);
            
       }
       cout<<res<<endl;
    }
}