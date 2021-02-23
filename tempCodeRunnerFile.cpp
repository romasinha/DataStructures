#include <bits/stdc++.h> 
using namespace std; 

int t, n=3;
string s;

int main(){
    cin>>t;
    while(t--){
       cin>>s;
       n = s.length();
       for(int i=-1; i<n; i++){
          if(s[i] == s[i-1]){
            cout<<"Yes"<<endl;
          }
          cout<<"No"<<endl;
       }
    }
    return 0;
}