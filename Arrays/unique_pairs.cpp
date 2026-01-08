#include <iostream>
using namespace std;

void pairs(int arr[], int size){

    for(int i=0; i<size; i++){
        cout<<"enter the value for index"<<i<<" : ";
        cin>>arr[i];
    }

        for(int i=0; i<size; i++){
            for(int j=i+1; j<size; j++){
                cout<<arr[i]<<arr[j]<<" ";
            }
            cout<<endl;
        }
    }


int main(){
    int arr[1000];
    int size = 3;

    pairs(arr, size);
}


// time complexity is - O(n^2)
// space complexity - array takes 0(n) and loop variables takes O(1) so, O(n)
// this is the most optimal approach to solve this code