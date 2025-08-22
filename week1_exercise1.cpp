#include "mbed.h"

DigitalOut led(LED1);
DigitalIn button(BUTTON1);

int main() {
    printf("Week 1 Exercise 1");
    while (1) {
        led.write(button.read());
        wait_ms(500);
    }
}
