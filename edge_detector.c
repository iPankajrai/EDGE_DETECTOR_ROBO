#include<avr/io.h>
#define F_CPU 16000000UL
#include<util/delay.h>                
void main()
{
  DDRB=0b11111111;
  DDRA=0b11111100;
  while(1)
  {
    
    if(PINA==0b00000011)
    {PORTB=0b00000101;}

    else if(PINA==0b00000001)
	{
	 PORTB=0b00001010;
     _delay_ms(500);
	
	PORTB= 0b00000100;
	_delay_ms(600);
	               
    }
     else if(PINA==0b00000010)
	
	 {
	  PORTB= 0b00001010;
	  _delay_ms(500);
     PORTB= 0b00000001;
	  _delay_ms(600);              }

	 else
	 {
	 PORTB= 0b00001010;
	 _delay_ms(500);
	 PORTB= 0b00000001;
	 _delay_ms(600);
	 }
  }
}  


