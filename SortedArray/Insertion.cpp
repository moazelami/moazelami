#include <iostream>
using namespace std;

int insertSorted(int arr[], int n, int key, int size)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(arr[i] > key)
        {
            break;
        }
    }
    for(int j = n; j > i; j--)
    {
        arr[j] = arr[j - 1];
    }
    arr[i] = key;
    return (n + 1);
}

int main()
{
    int arr[10] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = 5;
    int key = 26;

    cout << "Before Insertion: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    n = insertSorted(arr, n, key, size);

    cout << "\nAfter Insertion: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}