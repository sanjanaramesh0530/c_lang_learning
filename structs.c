#include <stdio.h>

struct Students{
    char name[50];
    int age;
    char major[50];
    double gpa;
};
int main() {
    struct Students student1;
    printf("Enter student's name: ");
    fgets(student1.name, sizeof(student1.name), stdin);
    printf("Enter student's age: ");
    scanf("%d", &student1.age);
    printf("Enter student's major: ");
    scanf("%s", student1.major);
    printf("Enter student's GPA: ");
    scanf("%lf", &student1.gpa);
 
    printf("%s", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Major: %s\n", student1.major);
    printf("GPA: %.2f\n", student1.gpa);
    return 0;
}