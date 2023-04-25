#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>


int _printf(const char *format, ...);

int	string_conversion(char c);
int	ft_pointer(long int n);
int	flag_conversion(char *str, int cheack);
int	length_modifiers(unsigned int n);
int	specifier_conversion(unsigned int n, char *base);
int	ft_adresse(unsigned long int n, char *base);
int buffered_printf(unsigned int n);
int binary_conversion(unsigned int n);
int rot13(char *str);
int rev_str(char *str);

#endi
