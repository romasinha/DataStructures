//to find the majority element in an array
//majority element is the one wich occurs more than n/2 times where n is the 
// size of the array

#include <bits/stdc++.h> 
using namespace std; 

void majorityELement(int size, int arr[]){
    int max_count = 0;
    int index = -1;
    for(int i=0; i<size; i++){
        int count = 0;
        for(int j=0;j<size; j++){
            if(arr[i] == arr[j])
            count++;
        }

        if(count> max_count){
            max_count = count;
            index = i;
        }
    }

    if(max_count> size/2){
        cout<<arr[index]<<endl;
    }
    else
    cout<<"No majority element"<<endl;
}

int main(){
    int arr[] = {1, 1, 2, 1, 3, 5, 1,};
    int size = sizeof(arr)/sizeof(arr[0]);

    majorityELement(size, arr);

    return 0;
}