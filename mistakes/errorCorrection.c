#include <stdio.h>
#include <locale.h>
// нет библиотеки дл€ импорта русского €зыка

int main() {

	int age;

	setlocale(LC_ALL, "rus");
	// использование русского €зыка без объ€влени€

	scanf_s("%d", &age);
	// нет "&"
	//также scanf вместо scanf_s

	if (age <= 13) {
		// нет скобки фигурной и пробел перед скобками здесь и далее
		printf("%d - детство", age);
		// нет ";" 
	}
	else if (14 <= age && age < 25) {
	// некорректна€ запись услови€
		printf("%d - молодость", age);
	// здесь и в следующем принте %f вместо %d
	}
	else if (25 <= age && age < 60) {
		printf("%d - зрелость", age);
	}
	else {
	printf("%d - старость", age);
	}
	return 0;
}
