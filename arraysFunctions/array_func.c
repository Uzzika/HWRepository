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

int main() {
	srand(time(0));
	setlocale(LC_ALL, "rus");

	int* mass;
	int size;

	printf("¬ведите длину массива: ");
	scanf_s("%d", &size);
	mass = (int*)malloc(sizeof(int) * size);
	generateMass(size, mass);
	printMass(mass, size);

	return 0;
	system("pause");
}
