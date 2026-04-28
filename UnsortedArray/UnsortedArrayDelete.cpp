#include <iostream>
using namespace std;

int deleteElement(int arr[], int n, int key)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            break;
        }
    }
    if(i < n)
    {
        for(int j = i; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        return (n - 1);
    }
    return n;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = size;
    int key = 5;

    cout << "Before Deletion: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    n = deleteElement(arr, n, key);

    cout << "\nAfter Deletion: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}