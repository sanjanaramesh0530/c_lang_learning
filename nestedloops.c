#include <stdio.h>
// ...existing code...
int main() {
    int num[3][3]= {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d,", num[i][j]);
        }
        printf("\n");
    }
    return 0;
}
