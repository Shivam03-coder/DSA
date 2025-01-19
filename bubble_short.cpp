#include <bits/stdc++.h>
using namespace std;

void PrintArray(int _arr[], int _n) {
    for (int i = 0; i < _n; i++) {
        cout << _arr[i] << " ";
    }
    cout << endl;
}

void SelectionSort(int _arr[], int _n) {
    for (int i = 0; i < _n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < _n; j++) {
            if (_arr[j] < _arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(_arr[i], _arr[minIndex]);
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Original Array: ";
    PrintArray(arr, n);
    SelectionSort(arr, n);
    cout << "Sorted Array: ";
    PrintArray(arr, n);
}
