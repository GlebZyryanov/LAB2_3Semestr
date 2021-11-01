#pragma once
#ifndef touchkah_h
#define touchkah_h

struct Touchka {
	int CordX;
	int CordY;
};
Touchka initTouch(int a,int b);
Touchka setTouch( Touchka T);
void printTouch( Touchka T);

#endif //Header

