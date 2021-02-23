#include <bits/stdc++.h> 
using namespace std; 

int t, n;


int main(){
    cin>>t;
    while(t--){
       char s[3];
       int p=0, c=0, m=0;
       cin>>s;
       for(int i=0; i<3; i++){
           if(s[i]== 'P')
           p++;
           else if(s[i]== 'C')
           c++;
           else if(s[i]== 'M')
           m++;
       }
       
       if(p==1 && c==1 && m==1)
           cout<<"YES"<<endl;
       
       else 
       cout<<"NO"<<endl;
    
}
return 0;
}