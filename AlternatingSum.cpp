#include <bits/stdc++.h> 
using namespace std; 

int main(){
 string n;
 int length, sum;
 
 n = "5673";
 length = 4;
 for(int i=0; i<4; i+2){
     sum += n[i];
 }
 cout<<sum;
}