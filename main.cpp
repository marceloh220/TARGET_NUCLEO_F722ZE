#include "EventQueue.h"
#include "PinNames.h"
#include "mbed.h"
#include <cstdio>

DigitalOut led1(LED1);
DigitalOut led2(LED2);
DigitalOut led3(LED3);
DigitalIn bt(BUTTON1);

EventQueue event_queue;
void blink_led1();
void blink_led2();

void blink_led1() { led1 = !led1; }

void blink_led2() { led2 = !led2; }

void button_led3() {
    static int buttom_mem = 0;

    if (bt && !buttom_mem) {
        buttom_mem = 1;
        led3 = !led3;
        printf("LED3: %d %c", (int)led3, '\n');
    }
    else if(!bt) buttom_mem = 0;
}

int main() {

  event_queue.call_every(500ms, blink_led1);
  event_queue.call_every(1s, blink_led2);
  event_queue.call_every(100ms, button_led3);
  event_queue.dispatch_forever();

  int count = 0;
  while (true) {
  }
}
