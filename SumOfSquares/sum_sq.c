#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {

    int k = 0, s = 0, b = 0;
    setlocale(LC_ALL, "rus");

    printf("������� ���������� \n");
    scanf_s("%d", &k);
    printf("������� ����� ����� enter \n");

    for (int i = 0; i < k; i++) {
        scanf_s("%d", &b);
        s += b * b;
    }
    printf("����� ����� %d", s);

    return 0;
    system("pause");
}