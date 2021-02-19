#include <bits/stdc++.h> 
#include <cstdlib>
using namespace std; 

int t, N, shop, person, price, profit, maximum;
int main(){
    vector<int> allprofit;
    int temp, each;
    cin>>t;
    while(t!=0){
        cin>>N;
        for(int i=0; i<N; i++){
            cin>>shop;
            cin>>person;
            cin>>price;
                temp = shop+1;
                each = abs(person/temp);
                profit = each*price;
                allprofit.push_back(profit);
                
            }
        maximum = *max_element(allprofit.begin(), allprofit.end());
        cout<<maximum<<endl;
    }
    
}