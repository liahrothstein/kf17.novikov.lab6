#include <iostream>

void printArray(const int array[], int length) {
    printf("[");
    for (int i = 0; i < length; i++) {
        if (i != length - 1) {
            printf("%d, ", array[i]);
        } else {
            printf("%d", array[i]);
        }
    }
    printf("]");
}