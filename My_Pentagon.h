#pragma once
#ifndef My_Pentagon_h
#define My_Pentagon_h
#include"touchkah.h"
struct My_Pentagon {
	Touchka listMy_Pentagon[5];
};

My_Pentagon initPentagon(int a, int b);
My_Pentagon setPentagon(My_Pentagon Pentagon);
void printPentagon(My_Pentagon Pentagon);
#endif