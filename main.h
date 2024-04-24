#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

void print_str(const char *str, int *count);
int _printf(const char *format, ...);
void print_char(char ch, int *count);
void print_number(int num, int *count);
void binary(int binary, int *c);

#endif
