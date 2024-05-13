/*=====================================================================================
Compute the natural logarithm of 2, by adding up to n terms in the series
1 - 1/2 + 1/3 - 1/4 + 1/5 -... 1/n
where n is a positive integer and input by user.
=====================================================================================*/

#include <stdio.h>

int main() {
    int n;
    double ln2 = 0.0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        if (i % 2 == 0) {
            ln2 -= 1.0 / i;
        } else {
            ln2 += 1.0 / i;
        }
    }

    printf("Natural logarithm of 2: %lf\n", ln2);
    return 0;
}
