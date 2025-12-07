#include <iostream>

#include "./utils/print-arr.h"
#include "./utils/sort.h"
#include "./utils/gen-rand-int-arr.h"

int main() {
    int numbers = 13, arr[numbers];
    int A = 20, B = 60, rnd; /*Определение диапазона чисел*/    

    printf("Программа выполняет генерацию 13 целых значений в диапазоне от 20 до 60, заполняет ими массив, сортирует его методом сдвига по возрастанию и показывает результат");
    printf("\nИсполнитель: Новиков Д. А.");
    printf("\nВариант: №14");

    srand(time(NULL));

    generateRandIntArr(numbers, rnd, arr, A, B);

    printf("\n\nСгенерированный массив: ");
    printArray(arr, numbers);
    
    printf("\n\nПроцесс сортировки:\n");
    shiftSort(arr, numbers);

    printf("\nИтоговый массив: ");
    printArray(arr, numbers);
    printf("\n");

    return 0;
}