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
int main() {
	srand(time(0));
	setlocale(LC_ALL, "rus");

	int* mass;
	int size, mini;

	printf("¬ведите длину массива: ");
	scanf_s("%d", &size);
	mass = (int*)malloc(sizeof(int) * size);
	generateMass(size, mass);
	printMass(mass, size);
	mini = minim(mass, size);
	printf("\n%d\n", mini);

	return 0;
	system("pause");
}
