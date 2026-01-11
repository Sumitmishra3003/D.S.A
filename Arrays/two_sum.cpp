#include<iostream>
using namespace std;

void twosum(int arr[], int size, int target){

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(arr[i] + arr[j] == target){
                cout<<arr[i]<<arr[j]<<" "<<endl;
            }
        }
    }
}

int main(){

    int arr[1000];
    int size = 6;
    int target = 6;

    for(int i=0; i<size; i++){
        cout<<"enter element at index "<<i<<" : ";
        cin>>arr[i];
    }

    twosum(arr, size, target);
}

// time complexity - O(n^2)
// space complexity - O(1)
// this code is not optimal, we can make it optimal by using hashing