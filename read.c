#include <stdio.h>

int main(void) {
    FILE *file = fopen("sanjana.txt", "r");
    if (!file) {
        perror("fopen");
        return 1;
    }

    /* use the file... */

    fclose(file);
    return 0;
}