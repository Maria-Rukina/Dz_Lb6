#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES 
#include <math.h>
void task3();

void main()
{
	setlocale(LC_ALL, "Rus");

	//task3()

	int x, y, r;
	puts("Введите координаты x и y:");
	scanf("%d", &x);
	scanf("%d", &y);
	if (x <= 5 && x >= -5 && y <= 5 && y >= -5) r = 1;
	else
	if (x > 0 && y < 0) r = 0;
	else
	if (x = -1 && (y <= 4 || y >= -4)) r = 1;
	else r = 0;
	if (x = -2 && (y <= 3 || y >= -3)) r = 1;
	else r = 0;
	if (x = -3 && (y <= 2 || y >= -2)) r = 1;
	else r = 0;
	if (x = -4 && (y <= 1 || y >= -1)) r = 1;
	else r = 0;
	if (x = -5 && y = 0) r = 1;
	if (x = 1 && y <= 1) r = 1;
	else r = 0;
	if (x = 2 && y <= 4.5) r = 1;
	else r = 0;
	if (x = 3 && y <= 4) r = 1;
	else r = 0;
	if (x = 4 && y <= 3) r = 1;
	else r = 0;
	if (x = 5 && y = 0) r = 1;
	printf("Координаты принадлежат( Да - 1, нет - 0): %d", r);
	// x = 4, y = 3
	// r = 1

	getchar();
}

void task3()
{
	int A, B, C, m1, m2;
	puts("Введите 3 числа:");
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	if (A > B && A > C) m1 = A;
	else
		if (A < B && A > C) m2 = A;
		else
			if (A < C && A > B) m2 = A;
	if (B > A && B > C) m1 = B;
	else
		if (B < A && B > C) m2 = B;
		else
			//if (B < C && B > A) m2 = B;
	if (C > A && C > B) m1 = C;
	else
		if (C > A && C < B) m2 = C;
		else
			if (C > B && C < A) m2 = C;
	printf("Произведение двух наибольших из трёх введёных чисел: %d", m1 * m2);
}