#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>


int _printf(const char *format, ...);

int	putstr(char *str, int cheack);
int	hexadecimal(unsigned int n, char *base);
int	putchar(char c);
int octal(unsigned int n);
int binary(unsigned int n);
int	adresse(unsigned long int n, char *base);
int	unsignedint(unsigned int n);
int rot13(char *str);
int	putnbr(long int n);
int rev_str(char *str);

#endif
