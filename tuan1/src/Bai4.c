#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

void main(void) {
	int h;   
	//Moi hang co 2i-1 dau *
	//Moi ben co h-i tab
	printf("Do cao tam giac: ");
	scanf("%d", &h);
	for (int i = 1; i <= h; i++)
	{
		for (int j = 0; j < h-i; j++)
		{
			printf("\t");
		}
		for (int j = 0; j < 2*i-1; j++)
		{
			printf("*\t");
		}
		for (int j = 0; j < h - i; j++)
		{
			printf("\t");
		}
		printf("\n");
	}


}