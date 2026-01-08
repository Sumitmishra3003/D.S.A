#include <iostream>
using namespace std;

void extreamprint(int arr[], int size){

    for(int i=0; i<size; i++){
        cout<<"enter the value at index "<<i<<" : ";
        cin>>arr[i];
    }

    int i = 0;
    int j = size - 1;

    while(i<j){
        cout<<arr[i]<<" ";
        i++;
        cout<<arr[j]<<" ";
        j--;
    }
    if( i == j)
    cout<<arr[i];
}

int main(){
    int arr[1000];
    int size = 5;

    extreamprint(arr, size);
}

// time complexity - O(n)
// space complexity i - O(n) , because we use array and array takes O(n) space
// this code is optimal