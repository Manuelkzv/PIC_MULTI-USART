#include <18F4550.h>
#fuses HS, NOWDT NOPROTECT
#use delay(internal=8Mhz)
#use rs232(baud=9600, xmit=PIN_C6,rcv=PIN_C7, STREAM=R8A )
#use rs232(baud=9600, xmit=PIN_C0,rcv=PIN_C1, STREAM=R8B )

char i = 0;

void main()
{
   while(1)
   {
      fprintf(R8A, "UART RS232 UART_R8A\n\r");
      fprintf(R8B, "UART RS232 UART_R8B\n\r");
      printf("Funciona el serial\n\r");
      getch();
   }
}


