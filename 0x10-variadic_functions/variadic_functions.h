#ifndef VARI_FUNC_H
#include <stdarg.h>
#define VARI_FUNC_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_integer(va_list val, char *sep);
void print_char(va_list val, char *sep);
void print_float(va_list val, char *sep);
void print_string(va_list val, char *sep);

typedef struct foramat_type 
{
	char *id;
	void (*f)(va_list args, char *sep);
} fm_t;
#endif
