#include <stdlib.h>
#include <stdio.h>

int main(void) {
    char c = 'L';
    int index = c - 'A';  // Implicit conversion from char to int

    printf("The ASCII value of '%c' is %d\n", c, index);
}