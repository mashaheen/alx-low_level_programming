#include<stdio.h>
#include<stdarg.h>
#include<string.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void p_char(va_list c);
void p_int(va_list i);
void p_float(va_list f);
void p_string(va_list s);
void print_all(const char * const format, ...);
