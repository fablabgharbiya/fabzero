/*
 * Written by Ahmed khairy for TOT training
 * on 5/8/2019
 * introduction to c language (library, DDRx, PORTx, _delay_ms(1000)
 */
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  DDRB = 0b00100000;
  while (1)
  {
    PORTB = 0b00100000;
    _delay_ms(1000);
    PORTB = 0b00000000;
    _delay_ms(1000);
  }
}
