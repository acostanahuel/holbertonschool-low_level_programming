#include <stdio.h>

/**
 * _puts - aaaaa
 * @str: string 
 *
 */


void _puts(char *str) {
    
	while (*str != '\0') 
    {
        
	    putchar(*str);
        str++;
    }
}

