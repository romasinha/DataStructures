#include <bits/stdc++.h> 
using namespace std; 

int main(){
    long long int n, req, sum=0;
    cin>>n;
    int arr[n];

    req = (n*(n+1))/2;

    for(int i=0; i<n-1; i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }

    cout<<req-sum<<endl;

}