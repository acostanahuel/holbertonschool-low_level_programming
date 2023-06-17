#include <unistd.h>
/*
 *main - main function prints putchar
 *Return: 0
 */
int main(void)
{
    const char* text = "_putchar\n";
    write(1, text, 9); 

    return 0;
}
