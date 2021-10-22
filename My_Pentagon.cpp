#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"touchkah.h"
#include "My_Pentagon.h"

My_Pentagon initPentagon(int a, int b) {
	My_Pentagon Pentagon;
	for (int i = 0; i < 5; i++) {
		Pentagon.listMy_Pentagon[i].CordX = a;
		Pentagon.listMy_Pentagon[i].CordY = b;
	}
	return Pentagon;
}
My_Pentagon setPentagon(My_Pentagon Pentagon) {
	for (int i = 0; i < 5; i++) {
		Pentagon.listMy_Pentagon[i] = setTouch(Pentagon.listMy_Pentagon[i]);
	}
	return Pentagon;
}
void printPentagon(My_Pentagon Pentagon) {
	for (int i = 0; i < 5; i++) {
		printf("(%d,%d) ", Pentagon.listMy_Pentagon[i].CordX, Pentagon.listMy_Pentagon[i].CordY);
	}
}