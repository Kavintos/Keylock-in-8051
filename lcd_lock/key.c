#include "lcd.h"
#include "key.h"
char input[4];
int index = 0; 
void check_password() {
    char correct[4] = {'1','2','3','4'};
    int ok = 1;
		int i;
    for(i= 0; i < 4; i++){
        if(input[i] != correct[i])
				{
					ok=0;
					break;
				}
    }

    cmd(0x01);
    if(ok) lcd_str("Access Granted");
    else lcd_str("Access Denied");

    delay(2000);
    cmd(0x01);
    lcd_str("Enter PIN:");
    index = 0;
}
void rowfinder1() {
    r1 = r2 = r3 = r4 = 1;
    c1 = c2 = c3 = 0;

    if(r1 == 0) { lcd_dat('1'); input[index++] = '1'; delay(200); }
    if(r2 == 0) { lcd_dat('4'); input[index++] = '4'; delay(200); }
    if(r3 == 0) { lcd_dat('7'); input[index++] = '7'; delay(200); }
    if(r4 == 0) { lcd_dat('*'); input[index++] = '*'; delay(200); }

    if(index == 4) check_password();  
}
void rowfinder2() {
    r1 = r2 = r3 = r4 = 1;
    c1 = c2 = c3 = 0;

    if(r1 == 0) { lcd_dat('2'); input[index++] = '2'; delay(200); }
    if(r2 == 0) { lcd_dat('5'); input[index++] = '5'; delay(200); }
    if(r3 == 0) { lcd_dat('8'); input[index++] = '8'; delay(200); }
    if(r4 == 0) { lcd_dat('0'); input[index++] = '0'; delay(200); }

    if(index == 4) check_password();  
}
void rowfinder3() {
    r1 = r2 = r3 = r4 = 1;
    c1 = c2 = c3 = 0;

    if(r1 == 0) { lcd_dat('3'); input[index++] = '3'; delay(200); }
    if(r2 == 0) { lcd_dat('6'); input[index++] = '6'; delay(200); }
    if(r3 == 0) { lcd_dat('9'); input[index++] = '9'; delay(200); }
    if(r4 == 0) { lcd_dat('#'); input[index++] = '#'; delay(200); }

    if(index == 4) check_password();  
}


