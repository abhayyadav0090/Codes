#include <stdio.h>

int main() {
    printf("Size of int: %zu bytes or %zu bits\n", sizeof(int), sizeof(int)*8);
    printf("Size of float: %zu bytes or %zu bits\n", sizeof(float), sizeof(float)*8);
    printf("Size of char: %zu bytes or %zu bits\n", sizeof(char), sizeof(char)*8);
    return 0;
}