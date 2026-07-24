#include <stdio.h>

int main()
{
    char name[30];
    int age;
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Hello, %s! You are %d years old.\n", name, age);
    return 0;
}