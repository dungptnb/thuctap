#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "stdafx.h"

void main(void) {

	char s[100];
	int l=0;
	int  u = 0;
	printf("Chuoi: ");
	gets(s);

	for (int i = 0; i < strlen(s); i++)
	{
		if (iswupper(s[i]))
			u += 1;
		else {
			if (!iswdigit(s[i]) && !iswspace(s[i]))
				l += 1;
		}
	}
	printf("So ky tu thuong: %d\n", l);
	printf("So ky tu hoa: %d\n", u);
	
}