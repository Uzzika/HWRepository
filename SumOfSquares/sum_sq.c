#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {

    int k = 0, s = 0, b = 0;
    setlocale(LC_ALL, "rus");

    printf("¬ведите количество \n");
    scanf_s("%d", &k);
    printf("¬водите числа через enter \n");

    for (int i = 0; i < k; i++) {
        scanf_s("%d", &b);
        s += b * b;
    }
    printf("—умма равна %d", s);

    return 0;
    system("pause");
}