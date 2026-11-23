#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char text[50];
    int i;
    char ch;
    fp=fopen("data.txt", "w");
    if (fp==NULL)
    {
        printf("Error opening file");
        exit(1);
    }
    printf("Enter text to write to file (max 50 characters): ");
    fgets(text, sizeof(text), stdin);
    fprintf(fp, "%s", text);
    fclose(fp);
    printf("Text written to file successfully.\n");
    fp=fopen("data.txt", "r");
    if (fp==NULL)
    {
        printf("Error opening file");
        exit(1);
    }
    ch=fgetc(fp);
    printf("Contents of the file:\n");
    while (ch!=EOF)
    {
        printf("%c", ch);
        ch=fgetc(fp);
    }
    fclose(fp);
return 0;
}