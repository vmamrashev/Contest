#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n;
    // double a;
    double b;

    scanf("%d", &n);
    double* array = malloc(n * sizeof(double));
    // double * result = malloc(n * sizeof(double));
    for (int i = 0; i < n; i++) {
        scanf("%lf", &array[i]);
    }
    b = array[0];
    if (n > 1) {
        for (int i = 1; i <= n; i++) {
            printf("%lf \n", b);
            b = b * 0.95 + array[i] * 0.05;
        }
    } else
        printf("%lf \n", b);

    return 0;
}