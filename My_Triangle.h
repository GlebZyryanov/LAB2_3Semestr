#pragma once
#ifndef My_Triangle_h
#define My_Triangle_h
#include"Touchkah.h"
#include "Otrezok.h"
struct My_Triangle {
	Touchka listTriangle[3];
};
My_Triangle initTriangle(int a,int b);
My_Triangle setTriangle(My_Triangle Triangle);
void printTriangle( My_Triangle Triangle);


#endif //Header
