#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int t;
    long long int k, n;
    string s;
    
    n = s.length();
    cin>>t;
    while(t--){
        int count=0, end=0;
        cin>>n>>k;
        cin>>s;
        for(int i=0; i<n; i++){
            if(s[i]=='*'){
                count++;
            }
            else count=0;

            if(count==k){
               end=1;
               break;
            }
        }
        
        if(end==0){
            cout<<"No"<<endl;
        }
        
        else cout<<"Yes"<<endl;
    }
    return 0;
}