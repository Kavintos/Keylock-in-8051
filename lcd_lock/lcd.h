#ifndef LCD_H
#define LCD_H

#include <reg51.h>

#define lcd P2
sbit rs = P3^0;
sbit e  = P3^1;

void delay(int x);
void cmd(char c);
void lcd_dat(char dat);
void ini();
void lcd_str(char *str);


#endif
