#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

int main() {
	setlocale(LC_ALL, "russian");
	int f, a, b, t, s, p, d, с, r, r2, y = 3;
	float pi = 3.14, dok, sok;
	for (int i = 0; i < y; i++) {
		printf("Загрузка");
		Sleep(100);
		printf(".");
		Sleep(100);
		printf(".");
		Sleep(100);
		printf(".");
		system("cls");
	}
	printf("Добро пожаловать!");
	Sleep(500);
	system("cls");
link1:
	printf("1. Прямоугольник.\n2. Треугольник.\n3. Круг.\nВвод: ");
	scanf_s("%d", &f);
	system("cls");
	if (f == 1) {
		printf("Введите две стороны прямоугольника: ");
		scanf_s("%d %d", &a, &b);
		system("cls");
		printf("Меню:\n1. Найти площадь прямоугольника.\n2. Найти периметр прямоугольника.\n3. Найти диагональ прямоугольника.\n4. Вернуться к выбору фигуры.\n0. Выйти.\nВвод: ");
		scanf_s("%d", &t);
		system("cls");
		if (t == 4) {
			goto link1;
		}
		else if (t == 1) {
			s = a * b;
			printf("Площадь прямоугольника = %d", s);
		}
		else if (t == 2) {
			p = a * 2 + b * 2;
			printf("Периметр прямоугольника = %d", p);
		}
		else if (t == 3) {
			d = sqrt(pow(side1, 2) + pow(side2, 2));
			printf("Диагональ прямоугольника = %d", d);
		}
		else if (t == 0) {
			return 0;
		}
	}
	if (f == 2) {
		printf("Введите две стороны прямоугольного треугольника: ");
		scanf_s("%d %d", &side1, &side2);
		system("cls");
		printf("Меню:\n1. Найти площадь треугольника.\n2. Найти периметр треугольника.\n3. Вернуться к выбору фигуры.\n0. Выйти.\nВвод: ");
		scanf_s("%d", &t);
		system("cls");
		if (t == 3) {
			goto link1;
		}
		else if (t == 1) {
			s == (a * b) / 2;
			printf("Площадь треугольника = %d", s);
		}
		else if (t == 2) {
			с = sqrt(pow(a, 2) + pow(b, 2));
			p = a + b + с;
			printf("Периметр треугольника = %d", p);
		}
		else if (t == 0) {
			return 0;
		}
	}
	if (f == 3) {
		printf("Введите радиус окружности: ");
		scanf_s("%d", &r);
		system("cls");
		printf("Меню:\n1. Найти площадь окружности.\n2. Найти длину круга.\n3. Найти диаметр окружности.\n4. Вернуться к выбору фигуры.\n0. Выйти\nВвод: ");
		scanf_s("%d", &t);
		system("cls");
		if (t == 4) {
			goto link1;
		}
		else if (t == 0) {
			return 0;
		}
		else if (t == 1) {
			sok = pi * pow(r, 2);
			printf("Площадь окружности = %f", sok);
		}
		else if (t == 2) {
			dok = 2 * pi * r;
			printf("Длина окружности = %f", dok);
		}
		else if (t == 3) {
			r2 = r * 2;
			printf("Диаметр окружности = %d", r2);
		}
	}
	return 0;
}