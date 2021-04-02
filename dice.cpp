#include <bits/stdc++.h> 
using namespace std; 
 
int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n,layer,spare,total=0;
	    cin>>n;
	    layer=n/4;
	    spare=n%4;
	    if(layer==1)
	    total=(60 - (4*spare));
	    else if(layer>1)
	    total=((layer-1)*44) + (60 - (4*spare));
	    
	    if(spare==1)
	    spare=20;
	    else
	    if(spare==2)
	    spare=36;
	    else
	    if(spare==3)
	    spare=51;
	    
	    total=total+spare;
	    cout<<total<<endl;
	}
	return 0;
}