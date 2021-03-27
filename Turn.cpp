#include <bits/stdc++.h> 
using namespace std; 

int main(){
    long long int t, u, v, a, s, square, max;
    double turn;
    cin>>t;
    while(t--){
        cin>>u>>v>>a>>s;
        if(u==v){
            cout<<"Yes"<<endl;
        }
        else{
        square = u*u-2*a*s;
        turn = pow(square, 0.5);
        if(turn>v){
            cout<<"No"<<endl;
        }
        else cout<<"Yes"<<endl;
    }
    }
    return 0;
}