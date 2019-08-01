#ifndef lcd_h
#define lcd_h

extern void write_lcd(unsigned char dat);
extern void cmd_lcd(unsigned char cmd);
extern void putc_lcd(unsigned char var);
extern void init_lcd();
extern void puts_lcd(char *s);
extern void putui_lcd(unsigned int n);
extern float putf_lcd(float f);
extern void putsi_lcd(int n);
extern void puts2_lcd(char *s);
extern void puthex_lcd(unsigned int n);
extern void putbin_lcd(unsigned int n);
extern void build_cgram(char *p,unsigned char s);

#endif
