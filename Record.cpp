#include <bits/stdc++.h> 
using namespace std; 

int main(){
    long long int t;
    double k1, k2, k3, v, final, time, rounded;
    cin>>t;
    while(t--){
        cin>>k1>>k2>>k3>>v;
        while(k1,k2,k3>0 && k1,k2<2 && k3<=1 && v>9 && v<11 ){
            final = k1*k2*k3*v;
            time = 100/final;
            rounded = std::floor((time * 100) + .5) / 100;
            if(rounded<9.58){
                cout<<"YES"<<endl;
                break;
            }
            else cout<<"NO"<<endl;
            break;
        }
    }
}