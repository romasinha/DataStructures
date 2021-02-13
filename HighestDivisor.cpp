#include <bits/stdc++.h> 
using namespace std; 

int arr[] = {1,2,3,4,5,6,7,8,9,10};
int n;

int main(){
    vector<int> divisor;
    cin>>n;
        for(int i=0; i<10; i++){
            if(n%arr[i]==0){
                divisor.push_back(arr[i]);
            }
            continue;
        }
    cout<<*max_element(divisor.begin(), divisor.end());
    
}

