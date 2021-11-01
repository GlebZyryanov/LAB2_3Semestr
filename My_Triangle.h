#pragma once
#ifndef My_Triangle_h
#define My_Triangle_h
#include"touchkah.h"

struct My_Triangle {
	Touchka listTriangle[3];
};
My_Triangle initTriangle(int a,int b);
My_Triangle setTriangle(My_Triangle Triangle);
void printTriangle( My_Triangle Triangle);


#endif //Header
