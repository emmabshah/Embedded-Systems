#include "mbed.h"

DigitalOut redLED(PC_2,1);
DigitalOut yellowLED(PC_3,1);
DigitalOut greenLED(PC_6,1);

// main() runs in its own thread in the OS
int main()
{
    while (true) {

int count = 0;
while (count < 4) {

    redLED = 0;
    wait_us(2500000);
    redLED = 1;
    wait_us(250000);

    redLED = 0;
    yellowLED = 0;
    wait_us(2500000); 
    redLED = 1;
    yellowLED = 1;
    wait_us(250000);

    greenLED = 0;
    wait_us(2500000);
    greenLED = 1;
    wait_us(250000);

while(count < 4){

    yellowLED = 0;
    wait_us(250000);
    yellowLED = 1;
    wait_us(250000);
    
    count = count + 1;
}
    count = count + 1;

    }
}
}
