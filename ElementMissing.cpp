#include <bits/stdc++.h> 
using namespace std; 

int main(){
    long long int n;
    cin>>n;
    long long int arr[n];
    if(n==2){
        for(int k=0; k<n-1; k++){
            cin>>arr[k];
            if(arr[k]==1)
            cout<<"2";
            else
            cout<<"1";
            
        }
        
    }


    else{
    for(long long int i=0; i<n-1; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);

    if(arr[n-2]!=n){
        cout<<n;
        
    }

    else{
    

    for(long long int j=1; j<n-1; j++){
        
        if(arr[j]-arr[j-1] !=1){
            cout<<arr[j]-1;
           
        }
    }
    }
}
}