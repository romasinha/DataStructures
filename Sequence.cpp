#include <bits/stdc++.h> 
using namespace std; 
#define int long long


signed main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int final = 0, total=0, calc=0;
        int one =0;
        int add = 4*k+1;
        vector <int> div;
        for(int i=1; i<add; i++){
            if(add%i==0){
                div.push_back(i);
            }
        }

        for(int j=0; j<div.size(); j++){
        
            final += ((2*k-1)/div[j]);
            total += ((2*k-1)/div[j])*div[j];
            //cout<<total<<endl;
        }

        one = (2*k-1)-final;
        calc= total+one+add;

        cout<<calc<<endl;
    }
return 0;
}