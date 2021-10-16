#pragma once
#ifndef Otrezok_h
#define Otrezok_h

struct Otrezok {
    Touchka A;//Координаты начала и конца отрезка
    Touchka B;
   //int OtrCordX;
   //int OtrCordY;
};
Otrezok initOtrezok(int a, int b);
void setOtrezok(Otrezok* O,struct Touchka* A,struct Touchka* B);
void printOtrezok(Otrezok O);
void lenghtOtrezok(Otrezok O);

#endif //Header
