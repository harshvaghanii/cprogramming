#include <stdio.h>
#include <string.h>
int main()
{
    int a = 10;
    int *ptr_to_a = &a;
    printf("The value of variable a is: %d\n", a);
    printf("The address of variable a is: %p\n", &a);
    printf("The value of variable ptr_to_a is: %p\n", ptr_to_a);
    printf("The address of variable ptr_to_a is: %p\n", &ptr_to_a);

    // Dereferencing
    printf("The value stored in the variable whose address is stored in ptr_to_a is: %d", *ptr_to_a);

    return 0;
}