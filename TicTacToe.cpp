#include <bits/stdc++.h> 
#include <cstdlib>
using namespace std; 


int main(){
  long long int t;
  cin>>t;
  while(t--){
      int cntx=0, cnto=0, cnt_=0;
      char arr[3][3];
      for(int i=0; i<3; i++){
          for(int j=0; j<3; j++){
              cin>>arr[i][j];
              if(arr[i][j]=='X')
              cntx++;
              if(arr[i][j]=='O')
              cnto++;
              if(arr[i][j]=='_')
              cnt_++;

          }
        }

       int winx=0, wino=0;
       //horizontal
       if(arr[0][0]=='X' && arr[0][1]=='X' && arr[0][2]=='X') winx=1;
       if(arr[1][0]=='X' && arr[1][1]=='X' && arr[1][2]=='X') winx=1;
       if(arr[2][0]=='X' && arr[2][1]=='X' && arr[2][2]=='X') winx=1;

       //Vertical
       if(arr[0][0]=='X' && arr[1][0]=='X' && arr[2][0]=='X') winx=1;
       if(arr[0][1]=='X' && arr[1][1]=='X' && arr[2][1]=='X') winx=1;
       if(arr[0][2]=='X' && arr[1][2]=='X' && arr[2][2]=='X') winx=1;

       //diagonal
       if(arr[0][0]=='X' && arr[1][1]=='X' && arr[2][2]=='X') winx=1;
       if(arr[0][2]=='X' && arr[1][1]=='X' && arr[2][0]=='X') winx=1;

       //horizontal
       if(arr[0][0]=='O' && arr[0][1]=='O' && arr[0][2]=='O') wino=1;
       if(arr[1][0]=='O' && arr[1][1]=='O' && arr[1][2]=='O') wino=1;
       if(arr[2][0]=='O' && arr[2][1]=='O' && arr[2][2]=='O') wino=1;

       //Vertical
       if(arr[0][0]=='O' && arr[1][0]=='O' && arr[2][0]=='O') wino=1;
       if(arr[0][1]=='O' && arr[1][1]=='O' && arr[2][1]=='O') wino=1;
       if(arr[0][2]=='O' && arr[1][2]=='O' && arr[2][2]=='O') wino=1;

       //diagonal
       if(arr[0][0]=='O' && arr[1][1]=='O' && arr[2][2]=='O') wino=1;
       if(arr[0][2]=='O' && arr[1][1]=='O' && arr[2][0]=='O') wino=1;

       if((winx==1 && wino==1) || (cntx-cnto)<0 || (cntx-cnto)>1)cout<<3<<endl;
       else if(cntx==0 && cnto==0 && cnt_==9)cout<<2<<endl;
       else if(winx==1 && wino==0 && cntx>cnto)cout<<1<<endl;
       else if(winx==0 && wino==1 && cntx==cnto)cout<<1<<endl;
       else if(winx==0 && wino==0 && cnt_==0)cout<<1<<endl;
       else if(winx==0 && wino==0 && cnt_>0)cout<<2<<endl;
       else cout<<3<<endl;
  }

  return 0;
}