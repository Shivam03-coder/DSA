#include <bits/stdc++.h>
using namespace std;

void PrintArray(int _arr[], int _n)
{
    for (int i = 0; i < _n; i++)
    {
        cout << _arr[i] << " ";
    }
    cout << endl;
}

void InsertionShort(int _arr[], int _n)
{
    for (int i = 1; i < _n; i++)
    {
        int j = i;
        while (j >= 0 && _arr[j - 1] > _arr[j])
        {
            swap(_arr[j - 1], _arr[j]);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Original Array: ";
    PrintArray(arr, n);
    InsertionShort(arr, n);
    cout << "Insertion Sorted Array: ";
    PrintArray(arr, n);
}
