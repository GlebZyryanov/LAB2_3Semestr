#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"touchkah.h"
#include "Otrezok.h"

Otrezok initOtrezok(int a, int b) {
	Otrezok O;
	O.listTouchka[0] = initTouch(a, b);
	O.listTouchka[1] = initTouch(b, a);
	
	return	O;
}
Otrezok setOtrezok(Otrezok O) {
	printf("\nSetting of Otrezok points:\n");
	O.listTouchka[0] = setTouch(O.listTouchka[0]);
	O.listTouchka[1] = setTouch(O.listTouchka[1]);
	return O;
}
void printOtrezok(Otrezok O) {
	printf("The Coordinates of Otrezok are: ");
	printf("(%d,%d-%d,%d)\n", O.listTouchka[0], O.listTouchka[1]);
}