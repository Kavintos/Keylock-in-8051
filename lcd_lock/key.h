#ifndef KEY_H
#define KEY_H

#include <reg51.h>

sbit c1 = P1^0;
sbit c2 = P1^1;
sbit c3 = P1^2;
sbit r1 = P1^3;
sbit r2 = P1^4;
sbit r3 = P1^5;
sbit r4 = P1^6;

void rowfinder1();
void rowfinder2();
void rowfinder3();

#endif
