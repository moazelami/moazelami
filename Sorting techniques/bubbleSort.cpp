#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void bubble_sort(int x[], int n)
{
    int i, j;
    for (i = n - 1; i > 0; i--)
        for (j = 0; j < i; j++)
            if (x[j] > x[j + 1])
                swap(&x[j], &x[j + 1]);
}

int main()
{
    int x[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(x) / sizeof(x[0]);
    bubble_sort(x, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << x[i] << " ";
    return 0;
}