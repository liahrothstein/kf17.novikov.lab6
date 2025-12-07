#include <iostream>

void shiftSort(int *a, int n) {
    int t, j;

    for (int i = 1; i < n; ++i) {
        t = a[i];
        j = i - 1;

        printf("Шаг i=%d: t=A[i]=%d, начальный j=%d\n", i, t, j);

        while (j >= 0 && a[j] > t) { /*Сдвигаем элементы, большие t, вправо*/
            a[j + 1] = a[j];
            printf("  Сдвиг: A[%d]=A[%d]=%d => массив: ", j + 1, j, a[j]);
            for (int k = 0; k < n; ++k) {
                printf("%d%s", a[k], k + 1 == n ? "\n" : " ");
            }

            j--;
        }

        a[j + 1] = t;
        printf("  Вставка: A[%d]=t=%d => массив: ", j + 1, t);
        for (int k = 0; k < n; ++k) {
            printf("%d%s", a[k], k + 1 == n ? "\n" : " ");
        }
        printf("\n");
    }
}