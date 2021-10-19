#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"Touchkah.h"
#include "Otrezok.h"
#include"My_Triangle.h"

My_Triangle initTriangle(int a,int b) {
	My_Triangle Triangle;
	for (int i = 0; i < 3; i++) {
		Triangle.listTriangle[i].CordX = a;
		Triangle.listTriangle[i].CordY = b;
	}
	return Triangle;
}
My_Triangle setTriangle(My_Triangle Triangle) {
	for (int i = 0; i < 3; i++) {
		Triangle.listTriangle[i] = setTouch(Triangle.listTriangle[i]);
	}
	return Triangle;
}
void printTriangle(My_Triangle Triangle) {
	printf("The Coordinates of triangle points are: ");
	for (int i = 0; i < 3; i++) {
		printf("(%d,%d) ", Triangle.listTriangle[i].CordX, Triangle.listTriangle[i].CordY);
	}
}