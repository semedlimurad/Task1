#include <stdio.h>

int main() {
    int n,i;

    printf("Enter the number of test scores: ");
    scanf("%d", &n);
    int scores[n];
    double avg;
    printf("Enter the test scores:");
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
        avg+=scores[i];
    }

    printf("The average score is: %.2lf", avg / n);
    return 0;
}

