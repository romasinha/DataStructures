#include <bits/stdc++.h> 
using namespace std; 

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int a, y, x, max;
        cin>>a>>y>>x;
        if(a>=y){
            max = x*y;
            cout<<max<<endl;
        }
        else if(a<y){
            max = (x*a)+1;
            cout<<max<<endl;
        }
        
    }
    return 0;
}