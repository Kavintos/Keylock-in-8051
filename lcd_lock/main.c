#include "lcd.h"
#include "key.h"

void main() {
    ini();
    lcd_str("Enter PIN:");

    while(1) {
        delay(30);
        c1 = c2 = c3 = 1;
        r1 = r2 = r3 = r4 = 0;

        if(c1 == 0) rowfinder1();
        if(c2 == 0) rowfinder2();
        if(c3 == 0) rowfinder3();
    }
}
