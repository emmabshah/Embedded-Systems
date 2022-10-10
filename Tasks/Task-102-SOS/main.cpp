// You need this to use the Module Support Board
#include "uop_msb.h"
using namespace uop_msb;

#define WAIT_TIME_MS 500 
DigitalOut greenLED(TRAF_GRN1_PIN);
Buzzer buzz;
Buttons buttons;

// TIP: (I suggest you read this!)
//
// Press the black reset button to restart the code (and stop the sound)
// Otherwise, the noise can be "distracting" :)

int main ()
{
    while (buttons.BlueButton == 0); 

    while (true)

    {

    greenLED =1;
    buzz.playTone("C");
    wait_us(WAIT_TIME_MS *150);

    greenLED = 0; 
    buzz.rest();
    wait_us(WAIT_TIME_MS *150);

    greenLED =1;
    buzz.playTone("C");
    wait_us(WAIT_TIME_MS *150);

    greenLED = 0;
    buzz.rest();
    wait_us(WAIT_TIME_MS *150);

    greenLED =1;
    buzz.playTone("C");
    wait_us(WAIT_TIME_MS *150);

    greenLED = 0;  
    buzz.rest();
    wait_us(WAIT_TIME_MS *150);

    greenLED =1;
    buzz.playTone("D");
    wait_us(WAIT_TIME_MS *450);

    greenLED = 0; 
    buzz.rest();
    wait_us(WAIT_TIME_MS *450);

    greenLED =1;
    buzz.playTone("D");
    wait_us(WAIT_TIME_MS *450);

    greenLED = 0;
    buzz.rest();
    wait_us(WAIT_TIME_MS *450);

    greenLED =1;
    buzz.playTone("D");
    wait_us(WAIT_TIME_MS *450);

    greenLED = 0;  
    buzz.rest();
    wait_us(WAIT_TIME_MS *450);

    greenLED =1;
    buzz.playTone("C");
    wait_us(WAIT_TIME_MS *150);

    greenLED = 0; 
    buzz.rest();
    wait_us(WAIT_TIME_MS *150);

    greenLED =1;
    buzz.playTone("C");
    wait_us(WAIT_TIME_MS *150);

    greenLED = 0;
    buzz.rest();
    wait_us(WAIT_TIME_MS *150);

    greenLED =1;
    buzz.playTone("C");
    wait_us(WAIT_TIME_MS *150);

    greenLED = 0; 
    buzz.rest(); 
    wait_us(WAIT_TIME_MS *150);
    
    }

}

int main()
{
    //Wait for the BLUE button to be pressed (otherwise this becomes super annoying!)
    while (buttons.BlueButton == 0);
    
    //Repeat everything "forever" (until the power is removed or the chip is reset)
    while (true)
    {
        //On for 250ms
        greenLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS * 250);  //250ms


        //Off for 250ms
        greenLED = 0;
        wait_us(WAIT_TIME_MS * 250);  //250ms

        //On for 250ms
        greenLED = 1;
        buzz.playTone("D");
        wait_us(WAIT_TIME_MS * 250);  //250ms


        //Off for 250ms
        greenLED = 0;
        wait_us(WAIT_TIME_MS * 250);  //250ms

        //On for 250ms
        greenLED = 1;
        buzz.playTone("E");
        wait_us(WAIT_TIME_MS * 250);  //250ms

        //Off for 250ms
        greenLED = 0;
        wait_us(WAIT_TIME_MS * 250);  //250ms

        //On for 250ms
        greenLED = 1;
        buzz.playTone("F");
        wait_us(WAIT_TIME_MS * 250);  //250ms

        //Off for 250ms
        greenLED = 0;
        wait_us(WAIT_TIME_MS * 250);  //250ms

        //On for 250ms
        greenLED = 1;
        buzz.playTone("G");
        wait_us(WAIT_TIME_MS * 250);  //250ms

        //Off for 250ms
        greenLED = 0;
        wait_us(WAIT_TIME_MS * 250);  //250ms


        //On for 250ms
        greenLED = 1;
        buzz.playTone("A", Buzzer::HIGHER_OCTAVE);
        wait_us(WAIT_TIME_MS * 250);  //250ms

        //Off for 250ms
        greenLED = 0;
        wait_us(WAIT_TIME_MS * 250);  //250ms


        //On for 250ms
        greenLED = 1;
        buzz.playTone("B", Buzzer::HIGHER_OCTAVE);
        wait_us(WAIT_TIME_MS * 250);  //250ms

        //Off for 250ms
        greenLED = 0;
        wait_us(WAIT_TIME_MS * 250);  //250ms

        //On for 250ms
        greenLED = 1;
        buzz.playTone("C", Buzzer::HIGHER_OCTAVE);
        wait_us(WAIT_TIME_MS * 250);  //250ms

        //Off for 250ms
        greenLED = 0;
        wait_us(WAIT_TIME_MS * 250);  //250ms

        //Pause
        buzz.rest();
        wait_us(WAIT_TIME_MS * 250);

    }
}

