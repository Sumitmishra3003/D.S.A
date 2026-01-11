#include<iostream>
using namespace std;

void sorting(int arr[], int size){
    int zerocount = 0;
    int onecount = 0;
    int twocount = 0;

    for(int i=0; i<size; i++)
{    if(arr[i] == 0)
    zerocount++;

    if(arr[i] == 1)
    onecount++;

    if(arr[i] == 2)
    twocount++;
}
    for(int i=0; i<zerocount; i++){
        cout<<"0 ";
    }
    for(int i=zerocount; i<zerocount+onecount; i++){
        cout<<"1 ";
    }
    for(int i=zerocount+onecount; i<size; i++){
        cout<<"2 ";
    }
}

int main(){

    int arr[1000];
    int size;

    cout<<"enter size of array : ";
    cin>>size;

    for(int i=0; i<size; i++){
        cout<<"enter element at index "<<i<<" : ";
        cin>>arr[i];
    }

    sorting(arr, size);
}


// dutch natinal flag algorithm.

/*void sort012(int arr[], int size){
    int low = 0, mid = 0, high = size - 1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{ // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}*/


// time complexity - O(n)
// space complexity - O(1)
// in both the solution, time and space complexity is same