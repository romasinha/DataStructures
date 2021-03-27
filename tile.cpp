#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int t, max, count, n;
    
    cin>>t;
    while(t--){
        vector <int> tile;
        count=0, n=0;
        cin>>n;
        if(n>=1 && n<=30){
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        for(int j=0; j<n; j++ ){
            tile.push_back(arr[j]);
            max=*max_element(tile.begin(), tile.end());
            if(arr[j]== max ){
                count++;
            }
        }

        cout<<count<<endl;
        }
        
    }

    
}