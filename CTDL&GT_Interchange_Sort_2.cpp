#include <iostream>
using namespace std;
// nguon tham khao: chat GPT
void interchangeSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int minIndex = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[] = {10, 10, 20, 03, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    interchangeSort(arr, n);

    cout << "Mang sau khi sap xep: \n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
