#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int t;
    string s;
    cin>>t;
    while(t--){
      cin>>s;
      size_t index = 0;
      while (true)
      {
        index = s.find("party", index);
        if(index == std::string::npos) break;

        s.replace(index, 5, "pawry");

        index =+ 5;
      }
      cout<<s<<endl;
      
    }
    return 0;
}