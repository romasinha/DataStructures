#include <bits/stdc++.h> 
using namespace std; 

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int c;
        int d, num, req, ub, lb, xorsum, diff;
        cin>>c;
        for(int i=0; i<=30; i++){
          num = pow(2, i);
          if(num>=c){
              d = i;
              break;
          }
        }
        ub = (pow(2,d)/2)-1;
        diff = c - pow(2,d-1);
		req = (pow(2,d)-1)-diff;
        cout<<ub*req<<endl;

    }
    return 0;
}