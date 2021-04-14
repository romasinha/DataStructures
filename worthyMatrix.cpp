#include <iostream>
using namespace std;
#include<bits/stdc++.h>


int main() {
	long long int t; 
	cin>>t;
	while(t--)
	{
	    long long int n,m,k1,c=0,i,j,count=0;
	    cin>>n>>m>>k1;
	    vector<vector<long long int>>v;
	    vector<long long int>sum;
	      vector<vector<long long int>> v1(n, vector<long long int>(m,0));
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            long long int y;
	            cin>>y;
	            sum.push_back(y);
	            if(i==0 && j==0) v1[i][j] = y;
	            else if(i==0) v1[i][j] = y + v1[i][j-1];
	            else if(j==0) v1[i][j] = y + v1[i-1][j];
	            else v1[i][j] = v1[i-1][j] + v1[i][j-1] - v1[i-1][j-1] + y;
	         
	        }
	        v.push_back(sum);
	        sum.clear();
	    }
	    
	    for(long long int i=0;i<v.size();i++) {
	        long long int size = 1;
	        for(long long int j=0;j<v[i].size();j++) {
	              long long int k = i-size,l=j-size,total=0;
	               if(k>=0 ) {
	                   total+=v1[k][j];
	               }
	               if(l>=0) total+=v1[i][l];
	               if(k>=0 && l>=0) total-=v1[k][l];
	               long long int sum = v1[i][j]-total;
	               if((sum/((long long)(size*size)))>=k1 && k+1>=0 && l+1>=0) {
	                
	                 count= count + (v[i].size()-j);
	                 size++;
	                 j--;
	               } 
	            if(size>i+1) break;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}