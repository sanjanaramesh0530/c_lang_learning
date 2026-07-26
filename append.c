#include <stdio.h>

int main() {
    FILE *fpointer=fopen("C:\\Desktop\\git-one\\c_lang_learning \\sanjana.txt", "a");
    fprintf(fpointer, "just trying to append some text to the file\n");
    fclose(fpointer);
    return 0;
}