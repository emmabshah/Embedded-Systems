#include "uop_msb.h"
using namespace uop_msb;

#define WAIT_TIME_MS 500 

DigitalOut red(TRAF_RED1_PIN,1);         //Note the initial state
DigitalOut amber(TRAF_YEL1_PIN,0);
DigitalOut green(TRAF_GRN1_PIN,0);

//Object for controlling the LCD
LCD_16X2_DISPLAY lcd;

int main()
{
    lcd.puts("RED");
    wait_us(1000000);

    amber = 1;
    lcd.cls();
    lcd.puts("Amber");
    wait_us(1000000);

    green = 1;
    lcd.cls();
    lcd.puts("Green");    
    wait_us(1000000);

    lcd.cls();
    lcd.puts("PENIS");

    while (true)
    {
        red = !red;
        wait_us(WAIT_TIME_MS * 10000);
        red = 0;

        amber = !amber;
        red = !red;
        wait_us(WAIT_TIME_MS * 2000);
        amber = 0;
        red = 0;

        green = !green;
        wait_us(WAIT_TIME_MS * 10000);
        green = 0;

        amber = !amber;
        wait_us(WAIT_TIME_MS * 2000);
        amber = 0;
    }
}
