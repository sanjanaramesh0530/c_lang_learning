int main()
{
    sayhello("mike");
    sayhello("john");
    sayhello("tom");
}
 
void sayhello(char name[])
{
    printf("Hello %s\n", name);
}