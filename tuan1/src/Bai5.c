#include <stdio.h>
#include <conio.h>
#include "stdafx.h"

void check(int);
void main(void)
{
	int d, m, y;
	printf("Ngay, thang, nam: ");
	scanf("%d%d%d", &d, &m, &y);
	if ((d >= 1)&&(m>=1)&&(m<=12)&&(y>=1900)&&(y<=9999)) {
		if (((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12)) && (d <= 31)) {
			check(y);
		}
		else if ( (m == 4) || (m == 6) || (m == 9) || (m == 11) && (d <= 30)) {
			check(y);
		}
		else if ((m==2)&&(d == 29)&& ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))){
					printf("Nam nhuan\n");
				}
		else if ((m == 2) && (d <29) && ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))) {
			check(y);
		}
		else {
			printf("Khong hop le!\n");
		}
			}
	
	else {
		printf("Khong hop le!\n");
	}
}

void check(int y) {
	if ((y%4==0)&&(y%100!=0||(y%400==0))) {
		printf("Nam nhuan\n");
	}
	else {
		printf("Khong phai nam nhuan\n");
	}
}