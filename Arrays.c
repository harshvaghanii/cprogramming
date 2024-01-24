#include <stdio.h>
void main()
{
    // Declaring an array
    int list[25];

    // Entering values in array
    int n = sizeof(list) / sizeof(list[0]);
    for (int i = 0; i < n; i++)
    {
        list[i] = i + 1;
    }

    // Reversing an Array before printing
    int start = 0, end = n - 1;
    while (start < end)
    {
        int temp = list[start];
        list[start] = list[end];
        list[end] = temp;
        start++;
        end--;
    }

    // Printing the array using tab spaces
    for (int i = 0; i < n; i++)
    {
        printf("%d ", list[i]);
    }
}