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
	printf("Put there the coordinates of points\n");
	scanf("%d", &T.CordX);
	scanf("%d", &T.CordY);
	return T;
}
void printTouch( Touchka T) {
	printf("The Coordinates of points are: ");
	printf("(%d,%d)", T.CordX,T.CordY);
}
