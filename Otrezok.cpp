#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"touchkah.h"
#include "Otrezok.h"

Otrezok initOtrezok(int a, int b) {
	Otrezok O;
	O.list[0] = initTouch(a, b);
	O.list[1] = initTouch(b, a);
	
	return	O;
}
Otrezok setOtrezok(Otrezok O) {
	O.list[0] = setTouch(O.list[0]);
	O.list[1] = setTouch(O.list[1]);
	return O;
}
void printOtrezok(Otrezok O) {
	printf("(%d,%d-%d,%d)\n", O.list[0], O.list[1]);
}