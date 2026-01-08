#include <iostream>
using namespace std;

void counts(int arr[], int size){

    int zerocount = 0, onecount = 0;

    for(int i = 0; i < size; i++){
        cout << "enter the value at index " << i << " : ";
        cin >> arr[i];

        if(arr[i] == 0)
            zerocount++;
        else if(arr[i] == 1)
            onecount++;
    }

    cout << "zero count is : " << zerocount << endl;
    cout << "one count is : " << onecount;
}

int main(){
    
    int arr[1000];
    int size = 6;

    counts(arr, size);
}

// time complexity is - O(n)
// space complexity is - O(n)