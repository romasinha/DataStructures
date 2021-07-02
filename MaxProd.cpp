#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int t;
    cin>>t;
    while(t--){
        int d, x, y, z, ans, t1, t2;
        cin>>d>>x>>y>>z;
        t1 = x*7;
        t2 = y*d + z*(7-d);
        ans = max(t1, t2);
        cout<<ans<<endl;
    }
    return 0;
}