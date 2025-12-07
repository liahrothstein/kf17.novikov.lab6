#include <iostream>

void generateRandIntArr(int numbers, int num, int arr[], int A, int B) {
    for (int i = 1; i <= numbers; i++) {
        num = A + rand() % (B - A + 1); /*Генерация случ. чисел*/
        arr[i - 1] = num; /*Заполнение массива*/
    }
}