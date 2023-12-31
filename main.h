#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int our_putchar(char c);
int custom_print_str(char*);
int custom_print_int(int n);
int custom_print_binary(unsigned int n);
int custom_print_unsigned(unsigned int num, int base);
int custom_print_octal(unsigned int num);
int custom_print_hex(unsigned int num, char base_char);
int custom_print_S(const char *str);
int custom_print_ptr(void *ptr);
int custom_print_reverse(const char *str);
int custom_print_rot13(const char *str);

#endif
