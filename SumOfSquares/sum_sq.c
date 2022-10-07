#include<stdio.h>
#include<math.h>

int main() {

    int k = 0, s = 0, b = 0;

    printf("vvedite kolvo\n");
    scanf_s("%d", &k);
    printf("vvodite chisla cherez enter\n");

    for (int i = 0; i < k; i++) {
        scanf_s("%d", &b);
        s += b * b;
    }
    printf("summa ravna %d", s);

    return 0;
    system("pause");
}