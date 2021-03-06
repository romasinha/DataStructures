#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int N, H, x;
    cin>>N;
    int arr1[N];
    int arr2[N];
    cin>>H>>x;
    
    for(int i=0; i<N; i++){
        cin>>arr1[i];
    }
    
    for(int j=0; j<N; j++){
        arr2[j] = arr1[j] + x;
    }

    
    for(int k=0; k<N; k++){
       if(arr2[k]>H || arr2[k] == H){
           cout<<"Yes";
           return 0;
       }
       
    }
    cout<<"No";
    
}