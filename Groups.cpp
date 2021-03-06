#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int t, len, count; 
    string s;
    cin>>t;
    while(t--){
      count=0;
      cin>>s;
      len = s.length();
      if(s[0]=='1' && s[0] !=s[1]){
          count = count +1;
      }
      
      for(int i=1; i<=len; i++){
        if(s[i]== '1' && s[i] != s[i+1]){
            count = count +1;

        }
      }
      cout<<count<<endl;
      
    }
return 0;
}