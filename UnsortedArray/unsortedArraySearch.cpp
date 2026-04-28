#include <iostream>
using namespace std;

int findElement(int arr[], int size , int key)
{
    int i;
    for(i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
        int key = 5;        
        int indexOfKey = findElement(arr, size, key);
        if(indexOfKey == -1)
        {
            cout << "Element not found in the array." << endl;
        }
        else
        {
            cout << "Element found at index: " << indexOfKey << endl;
        }      

    return 0;
}