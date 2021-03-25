#include <bits/stdc++.h>
#include <cmath> 
using namespace std; 
#define ll long long

int main(){
    ll int t, a, b, c, d, n, req, sum, xorsum, product;
    vector <ll int> final;
    cin>>t;
    while(t--){
        cin>>c;
        for(ll int i=0; i<30; i++){
          n = pow(2, i);
          if(n>c){
              req = n;
              break;
          }
        }
        
        for(ll int j=0; j<req; j++){
            for(ll int k=0; k<req; k++){
                xorsum = j^k;
                if(xorsum == c){
                    cout<<j<<" "<<k<<endl;
                   
                }
                }
            }
           

        }
    
    return 0;
}