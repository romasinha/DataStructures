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
     long long int k;
     cin>>k;
     long long int a=k+1, b, res=0;
     for(long long int i=0; i<2*k; i++){
         b = a+(2*(i+1)+1);
         gcd(a, b);
         res+=gcd(a, b);
         a = b;
        }
    cout<<res<<endl;
 }

 return 0;
}