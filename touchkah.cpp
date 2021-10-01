#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"touchkah.h"
#include<math.h>
void initTouch(struct Touchka* T) {
	T->Cord1 = NULL;
	T->Cord2 = NULL;
	
}
void setTouch(struct Touchka* T) {
	T->Cord1 = NULL;
	T->Cord2 = NULL;
	scanf("%d", &T->Cord1);
	scanf("%d", &T->Cord2);
	
}
void printTouch(struct Touchka* T) {
	printf("%d %d", T->Cord1, T->Cord2);
}
