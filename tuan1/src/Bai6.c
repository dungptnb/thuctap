#include<stdio.h>
#include<conio.h>
#include "stdafx.h"
#include<string.h>


char space(char xau[]) {
	char(*chu[50])[100], (*chu2[50])[100],tam[100] = "", (*chu3[50])[100], tam3[200] = "", tam2[100] = "";
	int i = -1;
	for (char *tok = strtok(xau, " "); tok != NULL; ) {
		chu[++i] = tok;
//	printf("%s\n",chu[i]);

		if (((tok = strtok(NULL, " ")) != NULL)) {
//				printf("%s\n", tok);

			if ((tok != ".")&&(tok != ",")) {
				chu[++i] = " ";
			}
		}
	}
	int j=0;
	for (;j <= i; j++) {
		strcat(tam, chu[j]);
	}
	//printf("Tam: %s\n", tam);


	i = -1;
	for (char *tok2 = strtok(tam, ","); tok2 != NULL;tok2= strtok(NULL, ",")) {
		chu2[++i] = tok2;
	}

	for (j=0; j <= i; j++) {
		strcat(tam2, chu2[j]);
		if (j < i) {
			strcat(tam2, ", ");
		}
	}
	//printf("Tam2: %s\n", tam2);

	i = -1;
	for (char *tok3 = strtok(tam2, "."); tok3 != NULL; tok3 = strtok(NULL, ".")) {
		chu3[++i] = tok3;
	}

	for (j = 0; j <= i; j++) {
		strcat(tam3, chu3[j]);
			strcat(tam3, ". ");
	}
	printf("%s\n", tam3);

//	for (int n = 0; n < strlen(tam3); n++) {
//		printf("%c", tam[n]);
//	}


	
}

void main(void)
{
	char xau[500], xau2[100];
	puts("Xau: ");
	gets(xau);
	space(xau);
}