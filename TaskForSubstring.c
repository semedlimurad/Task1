#include <stdio.h>
#include <string.h>
int main() {
    int i,k,c;
    printf("Text: ");
    char mrd[100];
    scanf("%99[^\n]", mrd);
    k = strlen(mrd);

    char smd[20];
    printf("Enter the text you want to find: ");
    scanf("%19s", smd);

    c = strlen(smd);

    for (i = 0; i < k; i++) {
        if (strncmp(mrd+i, smd, c) == 0) {
            printf("Found '%s' at position %d.\n", smd, i);
        }
    }

    return 0;
}

