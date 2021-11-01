#include<stdio.h>

#include"touchkah.h"
#include "Otrezok.h"
#include "My_Squaer.h"
#include"My_Triangle.h"
#include "My_Pentagon.h"
int main()
{
	Touchka T;
	T = initTouch(1, 3);
	T = setTouch(T);
	printTouch(T);

	My_Triangle Triangle;
	Triangle = initTriangle(2, 2);
	Triangle = setTriangle(Triangle);
	printTriangle(Triangle);
	
	Otrezok O;
	O = initOtrezok(0, 0);
	O = setOtrezok(O);
	printOtrezok(O);

	//использование функций с динамическими переменными 
	My_Squaer *Squaere = new My_Squaer;
	*Squaere = initSquaer(1,2);
	*Squaere = setSquaer(*Squaere);
	printSquaer(*Squaere);
	delete Squaere;

	My_Pentagon *Pentagon = new My_Pentagon;
	*Pentagon = initPentagon(1, 2);
	*Pentagon = setPentagon(*Pentagon);
	printPentagon(*Pentagon);
	delete Pentagon;
}

