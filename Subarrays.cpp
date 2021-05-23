#include <iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k, count=0;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[n];
        }
        
        while(k<n){
        for(int j=0; j<n; j++){
            if(a[j]!=a[j+k])
            count++;
            cout<<count<<endl;
        }
        
        }

        
    }

    return 0;

}