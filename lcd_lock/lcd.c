#include "lcd.h"

void delay(int x)
{
	int i,j;
	for(i=0;i<x;i++)
		for(j=0;j<500;j++);
}

void cmd(char c)
{
	rs=0;
	lcd=c;
	e=1;
	delay(5);
	e=0;
}

void lcd_dat(char dat)
{
	rs=1;
	lcd=dat;
	e=1;
	delay(5);
	e=0;
}
void lcd_str(char *str)
{
    while(*str)
    {
        lcd_dat(*str++);
    }
}


void ini()
{
	cmd(0x38);
	cmd(0x0E);
	cmd(0x06);
	cmd(0x01);
}
