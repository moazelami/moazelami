#include <iostream>
using namespace std;

int findMinLloc(int x[], int k, int size)
{
    int j, pos; 
    pos = k;
    for (j = k + 1; j < size; j++)
        if (x[j] < x[pos])
            pos = j;
    return pos;
}

int main()
{
    int x[] = {64, 25, 12, 22, 11};
    int size = sizeof(x) / sizeof(x[0]);
    int i, pos, temp;

    for (i = 0; i < size - 1; i++)
    {
        pos = findMinLloc(x, i, size);
        temp = x[i];
        x[i] = x[pos];
        x[pos] = temp;
    }

    cout << "Sorted array: \n";
    for (i = 0; i < size; i++)
        cout << x[i] << " ";
    return 0;
}