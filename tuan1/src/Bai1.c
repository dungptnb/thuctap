#include <stdio.h>
#include <conio.h>
#include "stdafx.h"

void main(void) {
	int n;
	int a[3];
	printf("So n: ");
	scanf_s("%d", &n);
	a[2] = n / 100;
	a[1] = (n % 100) / 10;
	a[0] = n % 10;

	printf("Ket qua: %d\n", a[0] * 100 + a[1] * 10 + a[2]);
}


