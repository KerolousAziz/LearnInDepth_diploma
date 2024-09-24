#include "uart.h"
#define UARTODR *((volatile unsigned int*)((unsigned int *)0x101f1000))

void Uart_send_string (unsigned char * P_TX_String)
{
	while (*P_TX_String != '\0')
	{
		UARTODR = (unsigned int)(*P_TX_String);
		P_TX_String++;
	}
}
