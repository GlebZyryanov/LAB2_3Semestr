#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"touchkah.h"
#include "My_Squaer.h"

My_Squaer initSquaer(int a, int b) {
	My_Squaer Squaer;
	for (int i = 0; i < 4; i++) {
		Squaer.listMy_Squaer[i].CordX = a;
		Squaer.listMy_Squaer[i].CordY = b;
	}
	return Squaer;
}
My_Squaer setSquaer(My_Squaer Squaer) {
	
	printf("\nSetting of squaere points:\n");
	for (int i = 0; i < 4; i++) {
		Squaer.listMy_Squaer[i] = setTouch(Squaer.listMy_Squaer[i]);
	}
	return Squaer;
}
void printSquaer(My_Squaer Squaer) {
	printf("The Coordinates of squaere points are: ");
	for (int i = 0; i < 4; i++) {
		printf("(%d,%d) ", Squaer.listMy_Squaer[i].CordX, Squaer.listMy_Squaer[i].CordY);
	}
}
