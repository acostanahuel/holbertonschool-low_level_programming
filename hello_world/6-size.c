#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main()
{
    int integerType;
    float floatType;
    double doubleType;
    char charType;

    
    printf("Size of int: %zu bytes\n",sizeof(integerType));
    printf("Size of float: %zu bytes\n",sizeof(floatType));
    printf("Size of double: %zu bytes\n",sizeof(doubleType));
    printf("Size of char: %zu byte\n",sizeof(charType));

    return 0;
}
