int main() {
    int age=30;
    int *pAge=&age;
    printf("Memory address of age: %p\n", pAge);
    printf("Value of age: %d\n", *pAge);
    printf("Memory address of pAge: %p\n", &pAge);
    printf("Value of age: %d\n", *&pAge);

    return 0;
}