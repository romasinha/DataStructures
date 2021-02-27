#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int t, N, K;
    cin>>t;
    cin>>N;
    cin>>K;
    while(t--){
        if(N<K){
            cout<<N<<endl;
        }

        else{
            cout<<N%K<<endl;
        }
    }
}