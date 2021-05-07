#include <bits/stdc++.h> 
#include <cstdlib>
using namespace std; 

int main(){
    int t;
    cin>>t;
    while(t--){
        int x, a, b, s;
        cin>>x>>a>>b;
        s=a+(100-x)*b;
        cout<<s*10<<endl;

    }

    return 0;
}