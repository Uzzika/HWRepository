#include <locale.h>
#include <math.h>
#include <stdio.h>

int main() {

	// ���������

	setlocale(LC_ALL, "rus");

	// ���������� ����������

	int a, Sbok, Spov, V;

	// ������������� ����������

	scanf_s("%d", &a);
	printf("����: %d\n", a);

	// ���������� ����

	V = pow(a, 3);
	Sbok = pow(a, 2) * 4;
	Spov = pow(a, 2) * 6;
	printf("���������:\n");
	printf("����� = %d\n", V);
	printf("������� ������ ����������� = %d\n", Spov);
	printf("������� ������� ����������� = %d\n", Sbok);

	// ����� ����������

	system("pause");

	// ���������� ���������

	return 0;
}