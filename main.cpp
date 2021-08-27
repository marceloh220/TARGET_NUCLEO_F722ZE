#include "EventQueue.h"
#include "PinNames.h"
#include "mbed.h"
#include <cstdio>

DigitalOut ldGreen(LED1);
DigitalOut ldBlue(LED2);
DigitalOut ldRed(LED3);
DigitalIn btUser(BUTTON1);

EventQueue event_queue;;

void blink_ldGreen() { ldGreen = !ldGreen; }

void blink_ldBlue() { ldBlue = !ldBlue; }

void button_btUser() {
  static int buttom_mem = 0;

  if (btUser && !buttom_mem) {
    buttom_mem = 1;
    ldRed = !ldRed;
    if (ldRed)
      printf("LED Red: on\n");
    else
      printf("LED Red: off\n");
  } else if (!btUser)
    buttom_mem = 0;
}

int main() {

  event_queue.call_every(500ms, blink_ldGreen);
  event_queue.call_every(1s, blink_ldBlue);
  event_queue.call_every(100ms, button_btUser);
  event_queue.dispatch_forever();

  int count = 0;
  while (true) {
  }
}
