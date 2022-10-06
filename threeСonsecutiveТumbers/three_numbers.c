#include <locale.h>
#include <stdio.h>

int main() {

	// настройки

	setlocale(LC_ALL, "rus");

	// объ€вление переменных

	int x;

	// инициализаци€ переменных

	printf("¬ведите переменную: ");
	scanf_s("%d", &x);

	// выполнение цели

	printf("1: %d\n", x);
	x = x + 1;
	printf("2: %d\n", x);
	x = x + 1;
	printf("3: %d\n", x);

	// вывод результата

	system("pause");

	// завершение программы

	return 0;
}