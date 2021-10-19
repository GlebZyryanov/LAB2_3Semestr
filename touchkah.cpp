#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"touchkah.h"
#include<math.h>
Touchka initTouch(int a, int b) {
	Touchka T;
	T.CordX = a;
	T.CordY = b;
	return T;
}
Touchka setTouch(Touchka T) {
	scanf("%d", &T.CordX);
	scanf("%d", &T.CordY);
	return T;
}
void printTouch( Touchka T) {
	printf("(%d,%d)", T.CordX,T.CordY);
}
