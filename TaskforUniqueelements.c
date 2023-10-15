#include <stdio.h>

int main() {
    int i,n,a;
    printf("The number of elements: ");
    scanf("%d", &n);
    int mrd[n];
    printf("Enter the elements:");
    scanf("%d", &mrd[0]);
    a=1;
    for ( i = 1; i < n; i++) {
        scanf("%d", &mrd[i]);
        if (mrd[i] != mrd[i - 1]) {
            mrd[a] = mrd[i];
            a++;
        }
    }
    printf("Final array: ");
    for (i = 0; i < a; i++) {
        printf("%d ", mrd[i]);
    }
    printf("\n");

    return 0;
}

