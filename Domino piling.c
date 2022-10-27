/*
Question 1. Codeforces --------> A. Domino piling
*/

// Answer ------->

#include <stdio.h>

int main () {
    int M, N;
    scanf("%d %d", &M, &N);
    int domino;
    domino = M * N / 2;
    printf("%d", domino);
    return 0;
}