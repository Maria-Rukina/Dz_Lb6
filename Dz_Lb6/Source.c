#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES 
#include <math.h>
void task3();
void taskDZ();

void main()
{
	setlocale(LC_ALL, "Rus");

	//task3();
	//taskDZ();
	int A, B, C, m;
	puts("Введите 3 числа:");
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	m = A * B * C;
	if (A < B && A < C) m = m / A;
	else
		if (B < A && B < C) m = m / B;
		else
			if (C < A && C < B) m = m / C;
	printf("Произведение двух наибольших из трёх ведёных чисел: %d", m);

	getchar();
}

void task3()
{
	int A, B, C, m;
	puts("Введите 3 числа:");
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	m = A * B * C;
	if (A < B && A < C) m = m / A;
	else
		if (B < A && B < C) m = m / C;
		else
			if (C < A && C < B) m = m / C;
	printf("Произведение двух наибольших из трёх ведёных чисел: %d", m);
}

void taskDZ()
{
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
	 x = 4, y = 3
	 r = 1
}
