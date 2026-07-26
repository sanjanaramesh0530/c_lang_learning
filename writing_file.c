#include <stdio.h>

int main() {
    FILE *fpointer=fopen("C:\\Desktop\\git-one\\c_lang_learning \\sanjana.txt", "w");
    fprintf(fpointer, "hello\nmy name is sanjana ramesh \ni am here practicing c programming language");
    fclose(fpointer);
    return 0;
}