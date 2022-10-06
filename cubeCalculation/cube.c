#include <locale.h>
#include <math.h>
#include <stdio.h>

int main() {

	// настройки

	setlocale(LC_ALL, "rus");

	// объ€вление переменных

	int a, Sbok, Spov, V;

	// инициализаци€ переменных

	scanf_s("%d", &a);
	printf("¬вод: %d\n", a);

	// выполнение цели

	V = pow(a, 3);
	Sbok = pow(a, 2) * 4;
	Spov = pow(a, 2) * 6;
	printf("–езультат:\n");
	printf("ќбъем = %d\n", V);
	printf("ѕлощадь полной поверхности = %d\n", Spov);
	printf("ѕлощадь боковой поверхности = %d\n", Sbok);

	// вывод результата

	system("pause");

	// завершение программы

	return 0;
}