#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int t;
    cin>>t;
    while(t--){
        int amin, bmin, cmin, tmin, a, b, c, t;
        cin>>amin>>bmin>>cmin>>tmin>>a>>b>>c;
        t= a+b+c;
        if(a>=amin && b>=bmin && c>=cmin && t>=tmin){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
    return 0;
}