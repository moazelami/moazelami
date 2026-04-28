#include <iostream>
using namespace std;

void insertionSort(int list[], int size)
{
    int i, j, item;

    for (i = 1; i < size; i++)
    {
        item = list[i];
        /* Move elements of list[0..i-1], that are greater than item, to one position ahead of their current position */

        for (j = i - 1; (j >= 0) && (list[j] > item); j--)
            list[j + 1] = list[j];
        list[j + 1] = item;
    }
}

int main()
{
    int list[] = {12, 11, 13, 5, 6};
    int size = sizeof(list) / sizeof(list[0]);

    insertionSort(list, size);

    cout << "Sorted array: \n";
    for (int i = 0; i < size; i++)
        cout << list[i] << " ";
    return 0;
}