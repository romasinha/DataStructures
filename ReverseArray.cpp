#include <bits/stdc++.h> 
using namespace std; 

void reverseArray(int arr[], int start, int end){
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
        
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    
    int arr[] = {1, 5, 7, 2, 6};

    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"The original array is "<<endl;
    print(arr, n);

    reverseArray(arr, 0, n-1);


    cout<<"The reversed array is "<<endl;
    print(arr, n);

}