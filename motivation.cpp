#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int t, s, r, n, x;
    cin>>t;
    while(t--){
        int max;
        cin>>n>>x;
        int space[n];
        int rating[n];
        vector<int>req;
       
        for(int i=0; i<n; i++){
            cin>>space[i];
            cin>>rating[i];

            if(space[i]<=x){
                req.push_back(rating[i]);

            }
        }
        cout<<*max_element(req.begin(), req.end());
    }
    return 0;
}