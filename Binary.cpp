#include <bits/stdc++.h> 
using namespace std; 

bool subSequence(string str1, string str2)
{
    long long int j=0, n;
    n= str2.size();
    for(long long int i=0; i<n; i++){
        if(str1[j]==str2[i])
        j++;
        if(j==str1.size())
        return true;
    }
    return false;
}

string toBinary(string s1){
   queue<string> q;
   q.push("1");
   while(true){
       string s2 = q.front();
       q.pop();

       if(subSequence(s2, s1)==false)
       return s2;
       string s3=s2;
       q.push(s2.append("0"));
       q.push(s3.append("1"));

       
   }

}

int main(){
    long long int t;
    cin>>t;
    while(t--){
        string s1;
        cin>>s1;
        long long int n;
        n=s1.size();
        int flag=0;
        for(long long int i=0; i<n; i++){
            
            if(s1[i]=='0')
            flag=1;
        
        }
        if(flag==0)
            cout<<"0"<<endl;
        
        else
        cout<<toBinary(s1)<<endl;
    }
    return 0;
}