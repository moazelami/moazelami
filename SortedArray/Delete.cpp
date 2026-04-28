#include <iostream>
using namespace std;

int deleteInSorted(int arr[], int n, int key)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            break;
        }
    }
    if(i == n)
    {
        return n; // Key not found
    }
    for(int j = i; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
    return (n - 1);
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = size;
    int key = 10;

    cout << "Before Deletion: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    n = deleteInSorted(arr, n, key);

    cout << "\nAfter Deletion: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}   