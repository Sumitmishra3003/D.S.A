#include<iostream>
using namespace std;

void reverse(int arr[], int size){  // this code actually reversethe array
    int start = 0, end = size - 1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

/*void reverse(int arr[], int size){  // this code only print the reverse of the array

   // int i = size - 1;
    for(int i=size-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
}*/

int main(){

    int arr[1000];
    int size = 5;

    for(int i=0; i<size; i++){
        cout<<"enter the element at index "<<i<<" : ";
        cin>>arr[i];
    }

    reverse(arr, size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

// time complexity - O(n)
// space complexity - O(1)

// we can also use reverse function 
// add #include <algorithm>
// reverse(arr, arr + size);
// time and space complexity is the same