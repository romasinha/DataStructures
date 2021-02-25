#include <bits/stdc++.h> 
using namespace std; 

void weird(long long int n){
    
    while(n!=1){
    cout<<n<<" ";
    if(n%2==0){
        n=n/2;
    }
    else{
        n=(n*3)+1;
    }
    if(n==1){
        cout<<n<<" ";
    }
    }
    
    
}
int main(){
    long long int n;
    cin>>n;
    if(n==1){
        cout<<"1";
    }
    
    weird(n);
}