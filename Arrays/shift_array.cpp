#include<iostream>
using namespace std;

void shiftarray(int arr[], int size, int shift){

    int index = size - (shift%size);

    for(int i=index; i<size; i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0; i<index; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[1000];
    int size;
    int shift;

    cout<<"enter the size of the array : ";
    cin>>size;

    for(int i=0; i<size; i++){
        cout<<"enter element at index "<<i<<" : ";
        cin>>arr[i];
    }

    cout<<"enter the shift value : ";
    cin>>shift;

    shiftarray(arr, size, shift);
}

//time complexity - O(n)
// space complexity - O(1)


/*#include <algorithm>

void rotateArray(int arr[], int size, int shift){
    shift = shift % size;

    reverse(arr, arr + size);
    reverse(arr, arr + shift);
    reverse(arr + shift, arr + size);
}*/ 
// tjis is the another way to solve this code with same time and space complexity
