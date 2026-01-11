#include <iostream>
using namespace std;

int maxElement(int arr[], int size) {
    int maxVal = arr[0];   // initialize with first element

    for(int i = 1; i < size; i++) {
        if(arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    int arr[1000];
    int size = 5;

    for(int i = 0; i < size; i++) {
        cout << "Enter element at index " << i << " : ";
        cin >> arr[i];
    }

    cout << "Maximum element is : " << maxElement(arr, size);
}

// time complexity is - O(n)
// space complexity is -  O(1) , becaues input array does not take extra space
