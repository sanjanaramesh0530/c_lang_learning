#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];
    int i;
    int len;

    printf("Enter a word: ");
    if (!fgets(str, sizeof(str), stdin)) {
        return 1;
    }

    len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[--len] = '\0';
    }

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            printf("%s is not a palindrome.\n", str);
            return 0;
        }
    }

    printf("%s is a palindrome.\n", str);
    return 0;
}