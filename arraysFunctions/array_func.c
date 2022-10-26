#include <stdio.h>
#include <locale.h>
#include <malloc.h>
#include <time.h>

void generateMass(int size, int* mass) {
	for (int i = 0; i < size; i++) {
		mass[i] = rand() % 121;
	}
}
void printMass(int* mass, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", mass[i]);
	}
}
int minim(int* mass, int size) {
	int minimal = 100000;
	for (int i = 0; i < size; i++) {
		if (mass[i] < minimal) {
			minimal = mass[i];
		}
	}
	return minimal;
}
int maxim(int* mass, int size) {
	int max = -100000;
	for (int i = 0; i < size; i++) {
		if (mass[i] > max) {
			max = mass[i];
		}
	}
	return max;
}
int sredn(int* mass, int size) {
	int sr;
	for (int i = 0; i < size; i++) {
		sr = mass[i];
	}
	sr = sr / size;
	return sr;
	
}
int main() {
	srand(time(0));
	setlocale(LC_ALL, "rus");

	int* mass;
	int size, mini, max, sred;

	printf("Введите длину массива: ");
	scanf_s("%d", &size);
	mass = (int*)malloc(sizeof(int) * size);
	generateMass(size, mass);
	

	mini = minim(mass, size);
	printf("\nМинимальный член %d\n", mini);

	max = maxim(mass, size);
	printf("\nМаксимальный член %d\n", max);

	sred = sredn(mass, size);
	printf("\nСреднее арифметическое %d\n", sred);
	
	printMass(mass, size);
	
	return 0;
	system("pause");
}
