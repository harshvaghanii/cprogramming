#include <stdio.h>
#include <string.h>

int main()
{
    // Storing a string
    char name[25];
    int age;
    char school_name[50];
    printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Please enter your age: ");
    scanf("%d", &age);
    getchar();
    printf("Please enter the name of your school: ");
    fgets(school_name, sizeof(school_name), stdin);
    printf("\nWelcome %s We have stored that you are %d years old and studying at %s", name, age, school_name);
    return 0;
}