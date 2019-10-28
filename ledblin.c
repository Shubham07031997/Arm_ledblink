#include<lpc214x.h>
unsigned int x,y;
void delay( unsigned int d)
{
   for(x=0;x<d;x++)	;
   {
     for(y=0;y<1275;y++);
	 {
	 }
	 }
	 }
int main()
{ PINSEL0=0x00000000;//pin 0.0 to 0.15 will work as general input output
 // PINSEL1=0x00000000; //pin 0.16 to0.31
 // PINSEL2=0x00000000; // pin 1.0 to 1.5
   
  IO0DIR=0xFFFFFFFF; //port0 work as 0utput
 //IO1DIR=0xFFFFFFFF;
  while(1)
  { IO0SET=0xFFFFFFFF;
    IO0CLR=0xFFFFFFFF;
    delay(10);
	IO0SET=0x00000000;
	IO0CLR=0x00000000;
	delay(10);

   // IO1SET=0x00000000;
  }
  }
