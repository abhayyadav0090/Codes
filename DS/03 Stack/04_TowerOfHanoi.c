/*
Program: Tower Of Hanoi
Author: Abhay Yadav
Date: 24/09/2026
*/

#include <stdio.h>

// Recursive function to solve Tower of Hanoi
void THANOI(int n, char from, char to, char aux) {
    if(n == 0) return;

    // Move n-1 disks from source to auxiliary
    THANOI(n-1, from, aux, to);

    // Move the nth disk from source to destination
    printf("Move disk %d from %c to %c\n", n, from, to);

    // Move n-1 disks from auxiliary to destination
    THANOI(n-1, aux, to, from);
}

int main() {
    int N;
    printf("Enter number of disks: ");
    scanf("%d", &N);

    // A = source, B = auxiliary, C = destination
    THANOI(N, 'A', 'C', 'B');

    return 0;
}
