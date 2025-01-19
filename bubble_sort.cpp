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

void BubbleShort(int _arr[], int _n)
{
    for (int i = 0; i < _n - 1; i++)
    {
        for (int j = 0; j < _n - i - 1; j++)
        {
            if (_arr[j] > _arr[j + 1])
            {
                swap(_arr[j], _arr[j + 1]);
            }
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
    BubbleShort(arr, n);
    cout << "Bubble Sorted Array: ";
    PrintArray(arr, n);
}
