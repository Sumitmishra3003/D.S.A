#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int s, int e, int target){

    while(s<=e){
       int mid = s + (e - s)/2;
       if(target == arr[mid]){
        return mid;
       }
       else if(target > arr[mid]){
        s = mid + 1;
       }
       else if(target < arr[mid]){
        e = mid - 1;
       }
    }
    return -1;
}

int main(){

    int arr[1000];
    int size;

     cout<<"enter the size of an array : ";
    cin>>size; 

    int s = 0; 
    int e = size-1;
    int target;

    for(int i=0; i<size; i++){
        cout<<"enter the value at index "<<i<<" : ";
        cin>>arr[i];
    }

    cout<<"enter the target : ";
    cin>>target;

   int ans = binarysearch(arr, size, s, e, target);

   if(ans == -1){
    cout<<"target not found "<<endl;
   }
   else{
    cout<<"target found at index "<<ans<<" and target is "<<arr[ans];
   }
}

// time complexity 
// best case - O(1)
// avg and worst case - O(log n)