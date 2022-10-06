//ввод x
//ввод y
//ввод z
//если все переменные не равны между собой:
 //если x большая из трёх переменных:
 //увеличить z на x
 //иначе если y большая из трёх переменных:
 //увеличить z на y
 //иначе:
 //z возвести в квадрат
 //напечатать z
//иначе:
 //если равны все:
 //написать "все переменные равны"
 //иначе:
 //вывести какие переменные равны между собой "_ = _
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	
	setlocale(LC_ALL, "rus");

	int x, y, z;

	scanf_s("%d %d %d", &x, &y, &z);
	
	if (x != y && x != z && y != z) {
		if (x > z && x > y) {
			z += x;
		}
		else if (y > z && y > x) {
			z += y;
		}
		else {
			z = pow(z, 2);
		}
		printf("z = %d\n", z);
	}
	else if (x == y && x == z) {
		printf("Все переменные равны\n");
	}
	else {
		if (x == y) {
			printf("x = y\n");
		}
		else if (y == x) {
			printf("y = z\n");
		}
		else {
			printf("x = z\n");
		}
	}
		system("pause");
		return 0;
}