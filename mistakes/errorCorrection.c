#include <stdio.h>
#include <locale.h>
// ��� ���������� ��� ������� �������� �����

int main() {

	int age;

	setlocale(LC_ALL, "rus");
	// ������������� �������� ����� ��� ����������

	scanf_s("%d", &age);
	// ��� "&"
	//����� scanf ������ scanf_s

	if (age <= 13) {
		// ��� ������ �������� � ������ ����� �������� ����� � �����
		printf("%d - �������", age);
		// ��� ";" 
	}
	else if (14 <= age && age < 25) {
	// ������������ ������ �������
		printf("%d - ���������", age);
	// ����� � � ��������� ������ %f ������ %d
	}
	else if (25 <= age && age < 60) {
		printf("%d - ��������", age);
	}
	else {
	printf("%d - ��������", age);
	}
	return 0;
}
