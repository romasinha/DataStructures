#include <bits/stdc++.h> 
using namespace std; 

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n, m, a, b, count=0;
        cin>>n>>m;
        for(long long int b=2; b<=n; b++){
            for(long long int a=1; a<b; a++){
                if(((m-(m%b))%a)==0){
                   count++;
                }
            }
        }
        cout<<count<<endl;
    }
return 0;
}