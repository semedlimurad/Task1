#include <stdio.h>
int main() {
    int m,a,i,n,j,k;
    printf("Enter the size of 1st array: ");
    scanf("%d", &m);
    int arr1[m];
    printf("Enter the elements of the 1st array:");
    for (i = 0; i < m; i++) {
        
        
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of the 2nd array: ");
    scanf("%d", &n);
    int arr2[n];
    printf("Enter the elements of the 2nd array:");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    int final[m + n];
    i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            final[k++] = arr1[i++];
        } else {
            final[k++] = arr2[j++];
        }
    }
    while (i < m) {
        final[k++] = arr1[i++];
    }
    while (j < n) {
        final[k++] = arr2[j++];
    }
    printf("Final array: ");
    for (a= 0; a < m + n; a++) {
        printf("%d ", final[a]);
    }
    printf("\n");
    return 0;
}

