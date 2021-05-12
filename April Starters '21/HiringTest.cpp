#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, x, y;
        cin>>n>>m;
        cin>>x>>y;
        for(int i=0; i<n; i++){
            string s;
            cin>>s;
            int cntf=0, cntp=0, cntu=0;
            for(int j=0; j<m; j++){
                if(s[j]=='F')
                cntf++;
                if(s[j]=='P')
                cntp++;
            }
            if((cntf>=x) || (cntf==(x-1)&&cntp>=y))
            cout<<"1";
            else cout<<"0";

        }
        cout<<endl;
        
    }

    return 0;
}