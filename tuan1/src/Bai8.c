
#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(void) {

	char xau[100];
	printf("Xau: ");
	scanf("%s", xau);
	
	for (int i = strlen(xau); i > 0; i--)
	{
		printf("%c", xau[i - 1]);
	}
	printf("\n");
}
