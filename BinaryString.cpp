#include <bits/stdc++.h> 
using namespace std; 


int main(){
    long long int t;
    cin>>t;
    while(t--){
        string s1, s2;
        long long int n, sum=0, remainder;
        cin>>s1;
        for(int i=0; i<s1.length(); i++){
            if(s1[i]=='1'){
                n=pow(2, s1.length()-(i+1));
                sum = sum+n;

            }
        }
        //cout<<sum<<endl;
        for(int j=0; j<sum; j++){
            //conversion from decimal to binary
            remainder = j%2;
            
        }
    }
    return 0;
}