#include "../inc/led.hpp"
#define F_CPU 1000000UL

#include <avr/io.h>
#include <util/delay.h>

Led::Led() {
    DDRA = 0xff;
    DDRB = 0xff;

    PORTA = 0;
    PORTB = 0;
}

void Led::Led_toggle() {
    _delay_ms(1000);
    PORTA = ~PORTA;
    PORTB = ~PORTB;
}