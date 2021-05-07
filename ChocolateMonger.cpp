#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n, x, count=0;
        cin>>n>>x;
        long long int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            }
        for(int j=0; j<n; j++){
            if(arr[j-1]!=arr[j]){
                count++;
                cout<<count<<endl;
            
            }
        }
        if(n-count>x){
            cout<<count<<endl;
        }
    }
    return 0;
}