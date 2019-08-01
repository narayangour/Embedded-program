#ifndef uart_h
#define uart_h

extern void init_uart();
extern void uart_tx(unsigned char  dat);
extern unsigned char uart_rx();

#endif
