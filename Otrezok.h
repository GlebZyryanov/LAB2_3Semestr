#pragma once
#ifndef Otrezok_h
#define Otrezok_h

struct Otrezok {
   // Touchka A;//Координаты начала и конца отрезка
   // Touchka B;
    Touchka list[2];
  
};
Otrezok initOtrezok(int a, int b);
Otrezok setOtrezok(Otrezok O);
void printOtrezok(Otrezok O);


#endif //Header
