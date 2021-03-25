#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int t, w1, w2, x1, x2, m;
    int max, min, diff;
    cin>>t;
    while(t--){
        cin>>w1>>w2>>x1>>x2>>m;
        diff = w2-w1;
        min = m*x1;
        max = m*x2;
        
        if(diff >= min && diff <= max){
            cout<<"1"<<endl;
        }
        else cout<<"0"<<endl;
        } 

    return 0;
}