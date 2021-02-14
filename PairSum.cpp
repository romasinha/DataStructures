//to find the pair of elements for a given sum in an array
//Method used- Hashing

#include <bits/stdc++.h> 
using namespace std; 

void pairs(int arr[], int size, int sum){
    unordered_set<int> s;
    for(int i=0; i<size; i++){
        int temp = sum - arr[i];
    

    if(s.find(temp) != s.end())
        cout<<"The two numbers are "<<arr[i]<<" and "<<temp;

        s.insert(arr[i]);

    }
    

    
}

//main func
int main(){
    int arr[] = {3, 8, 1, 9, 0};
    int sum = 4;
    int size = sizeof(arr)/sizeof(arr[0]);

    pairs(arr, size, sum);

    return 0;


}