#include <stdio.h>

void main()
{
    // int nums[10];
    int nums[] = {1, 2, 3, 4, 5};
    int n = sizeof nums / sizeof nums[0];
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the number: ");
    //     scanf("%d", &nums[i]);
    // }

    // printf("Printing the array: ");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", nums[i]);
    // }
    printf("%p\n", nums);
    printf("%d", *(nums));
}