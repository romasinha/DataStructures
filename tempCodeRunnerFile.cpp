#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int t, p;
    cin>>t;
    while(t--){
       int count=0, n, sum; 
       cin>>n; 
       int arr[n];
       for(int i=0; i<n; i++){
           cin>>arr[i];
       }
       for(int j=0; j<n; j++){
           sum+=arr[j];
       }

       if(sum%2==0){
           cout<<"0"<<endl;
       }

       
       else if(sum%2==1){
          for(int l=0; l<n; l++){
              if(arr[l]==2){
                  cout<<"1"<<endl;
                  break;
              }
            else{
               if(arr[l]%2==1){
                count++;
            }
        }
       }
       if(count%2==1){
               cout<<"-1"<<endl;
        }
       
       
    }
}
}