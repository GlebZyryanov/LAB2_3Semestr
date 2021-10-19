#pragma once
#ifndef Otrezok_h
#define Otrezok_h

struct Otrezok {
  
    Touchka listTouchka[2];
    
};
Otrezok initOtrezok(int a, int b);
Otrezok setOtrezok(Otrezok O);
void printOtrezok(Otrezok O);


#endif //Header
