//STARTER 
//THIS EXERCISE IS TO BE DONE IN THE ARM MBED SIMULATOR
//http://195.130.59.221/
//IF YOU HAVE ISSUES WITH THE SIMULATOR, CONTACT EMBEDDED LEAD
#include "mbed.h"
#include <cstdint>
DigitalOut led(LED1);
AnalogIn potentiometer(A0); // nice that the web version says p15 lol

const uint32_t flick_period = 2000; //ms
 
int main() {
    printf("Week 1 Exercise 2");
    while (1) {
        float reading = potentiometer.read();
        uint32_t on_time = static_cast<uint32_t>(
            reading * flick_period
        );
        
        uint32_t off_time = flick_period - on_time;
        led.write(true);
        wait_ms(on_time);
        led.write(false);
        wait_ms(off_time);
    }
}
