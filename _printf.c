#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
* _printf - prints out formated text
* @format: format specifier
* @num1: number of characters printed
* @n: number of arguments 
* Return: printed characters
*/
int _printf(const char *format, ...)
{
int num1 = 0;
va_list n;
if (format == NULL)
{
return (-1);
}
va_start(n, format);
while (*format)
{
if (*format != '%')
{
write(1, format, 1);
num1++;
}
else
{
format++;
if (*format == '\0')
break;
if (*format == '%')
{
write(1, format, 1);
num1++;
}
else if (*format == 'c')
{
char c = va_arg(n, int);
write(1, &c, 1);
}
else if (*format == 's')
{
char *s = va_arg(n, char *);
int str_len = 0;
while (s[str_len] != '\0')
str_len++;
write(1, s, str_len);
num1 += str_len;
}
}
format++;
}
va_end(n);
return (num1);
}
