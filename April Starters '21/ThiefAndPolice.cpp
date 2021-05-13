#include <bits/stdc++.h> 
using namespace std; 

int main(){
    long long int t;
    cin>>t;
    while (t--)
    {
        long long int n, m, x, y, a, b;
        cin>>n>>m>>x>>y>>a>>b;
        long long int thief = (n-x)+(m-y);
        long long int police = max(n-a, m-b);
        if(thief <= police){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }

    return 0;
    
}