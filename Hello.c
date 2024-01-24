#include <stdio.h>
#include <stdbool.h>
int main()
{
    int age = 25;
    char c = 'H';
    printf("I am %c and %d years old!\n", c, age);
    float f = 2.6;
    printf("The value of f is %.1f\n", f);
    printf("%lu\n", sizeof(age));
    bool complete = false;
    printf("The value of complete is %d", complete);
    return 0;
}