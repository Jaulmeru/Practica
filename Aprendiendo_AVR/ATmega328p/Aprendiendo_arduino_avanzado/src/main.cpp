#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void) {
  DDRD = 0xFF;
  PORTD = 0xB2;
  while(1){
    PORTD = 0xAA;
    _delay_ms(500);
    PORTD = 0x55;
    _delay_ms(500);
  }
}


