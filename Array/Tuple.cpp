#include <bits/stdc++.h> 
#include <tuple>
using namespace std; 

tuple<int, int> MinMax(int a, int b){
    if(a<b){
        return make_tuple(a, b);
    }
    else if(b>a){
        return make_tuple(b, a);
    }
}

int main(){
    int x=5; int y = 8;

    int max, min;
    tie(min, max) = MinMax(x, y);

    cout<<"The greater number is "<<max<<" and smaller number is"<<min;
}
