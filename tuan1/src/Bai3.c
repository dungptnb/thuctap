
#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

void main(void) {
	
	float m =0, kq, a, b;
	printf("So m da di: ");
	scanf("%f", &m);

	if (m<1000)
		kq = 10000;
	else if (m < 30000) {
		a = m - 1000;
		b = a / 200;
		kq = 10000 + b * 1500;
	}
	else
	{
		a = m - 30000;
		b = a / 1000;
		kq = 10000 + 29000 * 1500+ b*8000;
	}

	printf("So tien phai tra: %.2f\n", kq);
}