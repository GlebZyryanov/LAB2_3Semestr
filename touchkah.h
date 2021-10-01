#pragma once
#ifndef touchkah_h
#define touchkah_h

struct Touchka {
	int Cord1;//координаты точки
	int Cord2;
};
void initTouch(struct Touchka* T);
void setTouch(struct Touchka* T);
void printTouch(struct Touchka* T);

#endif //Header

