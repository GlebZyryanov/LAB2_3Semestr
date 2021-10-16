#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"touchkah.h"
#include "Otrezok.h"

Otrezok initOtrezok(int a, int b) {
	Otrezok O;

	O.A = initTouch(a, b);
	O.B = initTouch(b, a);
	
	return	O;
}
void printOtrezok(Otrezok O) {
	printf("%d,%d-%d,%d\n", O.A, O.B);
}