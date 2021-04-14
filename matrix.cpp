#include <iostream>
using namespace std;
#include<bits/stdc++.h>

void kv(int n, int m, int k, int &c, int row, int col, vector<vector<int>>v, int x, int y)
{
    cout<<"row"<<row<<" "<<col<<endl;
    if(row>=n || col>=m)
    return;
    else
    {
        kv(n,m,k,c,row+1, col+1, v,x,y);
        int s=0,avg,i,j,el=0;
        for(i=x;i<=row;i++)
        {
            
            for(j=y;j<=col;j++)
            {
                s=s+v[i][j];
                el++;
                cout<<v[i][j]<<" ";
            }
            cout<<"sum"<<s<<endl;
            
        }
        avg=s/el;
            if(avg>=k)
            c++;
            cout<<"avg"<<c<<endl;
        
    }
}

int main() {
	int t; 
	cin>>t;
	while(t--)
	{
	    int n,m,k,c=0,i,j;
	    cin>>n>>m>>k;
	    vector<vector<int>>v;
	    vector<int>a;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            int x;
	            cin>>x;
	            a.push_back(x);
	        }
	        v.push_back(a);
	        a.clear();
	    }
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            kv(n,m,k,c,i,j,v,i,j);
	        }
	    }
	    
	    cout<<"total"<<c<<endl;  
	}
	return 0;
}