#include <bits/stdc++.h> 
#include <sstream>
using namespace std; 

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n, sca=0, scb=0;
        string s;
        cin>>n;
        long long int cha=n, chb=n;
        cin>>s;

        for(int i=0; i<=n*2; i++){
            if(i%2==0){
                sca= sca + (s[i]- '0');
                cha--;
            }
            else{
                scb = scb + (s[i]-'0');
                chb--;
            }
            
            if(sca>scb+chb || scb>sca+cha){
                cout<<i+1<<endl;
                break;
            }
            else if(sca==scb && i==2*n-1){
                cout<<i+1<<endl;
                break;
            }

        }

    }
    return 0;
    
}