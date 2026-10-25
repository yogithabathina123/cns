#include <stdio.h>
#include <math.h>

int main() {
    int i;
    long double fact = 1, f5 = 1;
    long double total, unique;
    
    for (i = 1; i <= 25; i++)
        fact *= i;

    for (i = 1; i <= 5; i++)
        f5 *= i;

    total = fact;
    unique = total / (f5 * f5);

    printf("Total possible keys = 25! = %.0Lf\n", total);
    printf("Effectively unique keys = 25!/(5!*5!) = %.0Lf\n",
           unique);

    printf("Total keys approximately = 2^84\n");
    printf("Unique keys approximately = 2^75\n");

    return 0;
}
