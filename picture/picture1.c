#include <locale.h>
#include <stdio.h>

int main() {

	// ���������

	setlocale(LC_ALL, "rus");

	// ���������� ����������
	
	char x[50] = ".", y[10] = "........", z[2] = ".", a[2] = ".", b[2] = "|";

	// ������������� ����������

	printf("%s\n", x);
	strcat(x, y);
	printf("%s\n", x);
	strcat(x, y);
	printf("%s\n", x);
	strcat(x, y);
	printf("%s\n", x);
	strcat(x, y);
	printf("%s\n\n", x);
	
	printf("%s\n", x);
	printf("%s\t\t\t\t%s\n", z, z);
	printf("%s\t\t\t\t%s\n", z, z);
	printf("%s\t\t\t\t%s\n", z, z);
	printf("%s\t\t\t\t%s\n", z, z);
	printf("%s\n\n", x);

	printf("\t\t\t\t%s\n", z);
	strcat(z, y);
	printf("\t\t\t%s\n", z);
	strcat(z, y);
	printf("\t\t%s\n", z);
	strcat(z, y);
	printf("\t%s\n", z);
	printf("%s\n\n", x);

	printf("%s\n", x);
	printf("%s\t%s\t%s\t%s\t%s\n", a, b, b, b, a);
	printf("%s\t%s\t%s\t%s\t%s\n", a, b, b, b, a);
	printf("%s\t%s\t%s\t%s\t%s\n", a, b, b, b, a);
	printf("%s\t%s\t%s\t%s\t%s\n", a, b, b, b, a);
	printf("%s\n", x);


	// ���������� ����

	// ����� ����������

	system("pause");

	// ���������� ���������

	return 0;
}