// arr2 is a subset of arr1
//Method used- Hashing
#include <bits/stdc++.h> 
using namespace std; 

bool ifPresent(int arr1[], int m, int arr2[], int n){

    //Stl set for hashing
    set<int> hashset;

    for(int i=0; i<m; i++){
        hashset.insert(arr1[i]);
    }

    //to check if present all elements of arr2 in arr1
    for(int i=0; i<n; i++){
        if(hashset.find(arr2[i]) == hashset.end())
        return false;
    }

    return true;
}

//main func

int main(){
    int arr1[] = {4, 5, 7, 2, 9};
    int arr2[] = {9, 7, 2};

    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr1)/sizeof(arr1[0]);

    if(ifPresent(arr1, m, arr2, n))
        cout<<"The elements of arr2 are present in arr1"<<endl;
    
    else

    cout<<"There isn't any subset possible"<<endl;
    return 0;

}