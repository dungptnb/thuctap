
#include "stdafx.h"
#include<stdio.h>
#include<conio.h>
int ucln(int, int);
void main(void)
{
	int a, b, u;
	printf("a, b: ");
	scanf("%d%d", &a, &b);
	u = ucln(abs(a), abs(b));
	printf("Uoc chung lon nhat: %d\n", u);
	printf("Boi chung nho nhat: %d\n", abs(a*b)/ u);

}


int ucln(int a, int b) {
	if (a == b)
		return a + b;
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	return a;
}