#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

int main() {
	setlocale(LC_ALL, "russian");
	int f, a, b, t, s, p, d, �, r, r2, y = 3;
	float pi = 3.14, dok, sok;
	for (int i = 0; i < y; i++) {
		printf("��������");
		Sleep(100);
		printf(".");
		Sleep(100);
		printf(".");
		Sleep(100);
		printf(".");
		system("cls");
	}
	printf("����� ����������!");
	Sleep(500);
	system("cls");
link1:
	printf("1. �������������.\n2. �����������.\n3. ����.\n����: ");
	scanf_s("%d", &f);
	system("cls");
	if (f == 1) {
		printf("������� ��� ������� ��������������: ");
		scanf_s("%d %d", &a, &b);
		system("cls");
		printf("����:\n1. ����� ������� ��������������.\n2. ����� �������� ��������������.\n3. ����� ��������� ��������������.\n4. ��������� � ������ ������.\n0. �����.\n����: ");
		scanf_s("%d", &t);
		system("cls");
		if (t == 4) {
			goto link1;
		}
		else if (t == 1) {
			s = a * b;
			printf("������� �������������� = %d", s);
		}
		else if (t == 2) {
			p = a * 2 + b * 2;
			printf("�������� �������������� = %d", p);
		}
		else if (t == 3) {
			d = sqrt(pow(side1, 2) + pow(side2, 2));
			printf("��������� �������������� = %d", d);
		}
		else if (t == 0) {
			return 0;
		}
	}
	if (f == 2) {
		printf("������� ��� ������� �������������� ������������: ");
		scanf_s("%d %d", &side1, &side2);
		system("cls");
		printf("����:\n1. ����� ������� ������������.\n2. ����� �������� ������������.\n3. ��������� � ������ ������.\n0. �����.\n����: ");
		scanf_s("%d", &t);
		system("cls");
		if (t == 3) {
			goto link1;
		}
		else if (t == 1) {
			s == (a * b) / 2;
			printf("������� ������������ = %d", s);
		}
		else if (t == 2) {
			� = sqrt(pow(a, 2) + pow(b, 2));
			p = a + b + �;
			printf("�������� ������������ = %d", p);
		}
		else if (t == 0) {
			return 0;
		}
	}
	if (f == 3) {
		printf("������� ������ ����������: ");
		scanf_s("%d", &r);
		system("cls");
		printf("����:\n1. ����� ������� ����������.\n2. ����� ����� �����.\n3. ����� ������� ����������.\n4. ��������� � ������ ������.\n0. �����\n����: ");
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
			printf("������� ���������� = %f", sok);
		}
		else if (t == 2) {
			dok = 2 * pi * r;
			printf("����� ���������� = %f", dok);
		}
		else if (t == 3) {
			r2 = r * 2;
			printf("������� ���������� = %d", r2);
		}
	}
	return 0;
}