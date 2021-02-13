#include <bits/stdc++.h> 
using namespace std; 

int t;
int n;
int num;

int main(){
    int j=0;
    int k=0;
    int sum;
    int total;
    cin>>t;
    while(t>0){
        vector<int> op;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>num;
            op.push_back(num);
        }
        k = j+1;
        for(j=0; j<n; j++){
            if(j=n-1){
                sum = abs(op[j] - op[0]);
                sum +=sum;
                total = sum;
                cout<<total<<endl;
                
            }
            exit;
            sum = abs(op[j]-op[k]);
            sum +=sum;
            
            k++;
            if(k=n){
                return 0;
            }
            
        }
        
    exit;
    }
   
   return 0;
    
}