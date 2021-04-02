#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    while(a,b,c>=1 && a,b,c<=10){
        if(a==b || b==c || a==c){
            cout<<"Yes";
            break;
        }
        else cout<<"No";
        break;
    }
    return 0;
}