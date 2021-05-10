#include <bits/stdc++.h> 
#include <vector>
using namespace std; 


void modular(){
    long long int n, m;
    cin>>n>>m;
    long long int total=0;
    vector<long long int> vec(n+1, 1);
    for(long long int a=2; a<=n; a++){
        long long int modA = m%a;
        total+=vec[modA];
        for(long long int b = modA; b<=n; b+=a){
           vec[b]++;
        } 
    }

    cout<<total<<endl;
    }

    int main(){
        long long int t;
        cin>>t;
        while(t--){
            modular();
        }
        return 0;
    }