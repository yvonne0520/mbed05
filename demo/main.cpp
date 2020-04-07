#include "mbed.h"

DigitalOut led3(LED3);
EventQueue queue(32*EVENTS_EVENT_SIZE);

void blue_led()
{
    led3 = !led3;
}

int main()
{
    queue.call_every(500, blue_led);
    queue.dispatch();
}