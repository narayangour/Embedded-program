#ifndef keypad_h
#define keypad_h
extern unsigned char colscan();
extern unsigned char keyscan();
extern void delay_ms(unsigned int dly);
extern void init_keypad_matrix_iodir();
#endif
