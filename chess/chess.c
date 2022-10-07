#include <stdio.h>
#include<locale.h>
#include<math.h>

int main() {

    setlocale(LC_ALL, "rus");

    int x1 = 0, y1 = 0, x2 = 0, y2 = 0, f = 0, r = 0, p = 0, kr = 0, fe = 0, la = 0, sl = 0, kn = 0;
    char k1 = 'm', k2 = 'n';

    printf("Введите первую клетку (g 6)\nStart: ");

    k1 = getchar();

    scanf_s("%d", &y1);
    printf("Выберете фигуру (1 - король,2 - ферзь, 3 - ладья, 4 - слон,5 - конь)\n");
    scanf_s("%d", &f);
    printf("Введите вторую клетку (g 6)\nFinish: ");
    getchar();

    k2 = getchar();

    scanf_s("%d", &y2);

    x1 = k1 - 96;
    x2 = k2 - 96;

    if (x1 >= 9  x2 >= 9  y1 >= 9  y2 >= 9) {
        printf("Неверное значение клетки");
        p = 1;
    }
    if (p == 0) {
        if (abs(x2 - x1) <= 1 && (abs(y2 - y1)) <= 1) {
            if (f == 1)
                r = 1;
            kr = 1;
        }if ((y1 == y2)  (x1 == x2)  (abs(x1 - x2) == abs(y1 - y2))) {
            if (f == 2)
                r = 1;
            fe = 1;
        }if ((y1 == y2)  (x1 == x2)) {
            if (f == 3)
                r = 1;
            la = 1;
        }if (abs(x1 - x2) == abs(y1 - y2)) {
            if (f == 4)
                r = 1;
            sl = 1;
        }if ((abs(x1 - x2) == 2 && abs(y1 - y2) == 1)  (abs(y1 - y2) == 2 && abs(x1 - x2) == 1)  (x1 == x2 && y1 == y2)) {
            if (f == 5)
                r = 1;
            kn = 1;
        }
    }
    else if (f > 5 || f < 1)

        printf("Неверное значение фигуры\n");

    if (r == 1) {
        printf("Результат: корректный ход\n");
    }
    else {
        printf("Результат: некорректный ход\n");
        if (kr == 1)
            printf("Так может сходить Король\n");
        if (fe == 1)
            printf("Так может сходить Ферзь\n");
        if (la == 1)
            printf("Так может сходить Ладья\n");
        if (sl == 1)
            printf("Так может сходить Слон\n");
        if (kn == 1)
            printf("Так может сходить Конь\n");
    }

    system("pause");
    return 0;
}