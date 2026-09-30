#include <stdio.h>
#include <math.h>

int main(void)
{
    double n = 0, p = 0;

    printf("Enter base (n > 0): ");
    if (scanf("%lf", &n) != 1 || n <= 0) {
        fprintf(stderr, "Error: Base must be a positive number.\n");
        return 1;
    }

    printf("Enter power (p >= 0): ");
    if (scanf("%lf", &p) != 1 || p < 0) {
        fprintf(stderr, "Error: Power must be non-negative.\n");
        return 1;
    }

    // Direct O(1) computation
    long long digits = (long long)floor(p * log10(n)) + 1;
    double ans = pow(n, p);

    printf("Result: %.0f\n", ans);
    printf("Digits: %lld\n", digits);
    printf("Power:  %.0f\n", p);

    return 0;
}