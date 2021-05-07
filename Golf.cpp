#include <bits/stdc++.h> 
using namespace std; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--){
        long long int n, x, k, drop;
        cin>>n>>x>>k;
        if(x%k==0){
            cout<<"Yes"<<endl;
        }
        
        else if(((n+1)-x)%k==0){
            cout<<"Yes"<<endl;
        }

        else cout<<"No"<<endl;
    }
    return 0;
}