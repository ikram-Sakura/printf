#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>


int _printf(const char *format, ...);

int	_putstr(char *str, int cheack);
int	_hexadecimal(unsigned int n, char *base);
int	_putchar(char c);
int _octal(unsigned int n);
int _binary(unsigned int n);
int	_adresse(unsigned long int n, char *base);
int	_unsignedint(unsigned int n);
int _rot13(char *str);
int	_putnbr(long int n);
int _rev_str(char *str);

#endif
