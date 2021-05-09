#include <bits/stdc++.h> 
using namespace std; 

int main(){
   long long int t;
    cin>>t;
    while(t--){
       long long int n, m, a, b=0;
       cin>>n>>m;
       if(n>=2){
       for(int i=1; i<=n; i++){
           for(int j=i+1; j<=n; j++){
               if(i!=j){
               if(((m%i)%j)==((m%j)%i)){
                   cout<<i<<" "<<j<<endl;
               b++;
               }
               }
           }
       }
       cout<<b<<endl;

    }}

    return 0;
}