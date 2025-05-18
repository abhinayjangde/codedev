// mathutils.c
#include <stdio.h>
#include "mathutils.h"

int count = 0;  // External linkage (can be accessed in main.c)

static int multiplier = 2;  // Internal linkage (only inside this file)

// Function with no linkage (local variable inside)
void printSquare(int n) {
    int result = n * n;  // No linkage
    printf("Square of %d = %d\n", n, result);
    count++;
}

int add(int a, int b) {
    return a + b + multiplier;
}
