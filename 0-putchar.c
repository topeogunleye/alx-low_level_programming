#include <stdio.h>

/**
 * main - prints _putchar, followed by a new line
 * Return: 0 if successful, non-zero otherwise
 */
int main(void)
{
    /* declare a char array to store the string */
    char str[] = "_putchar\n";

    /* loop through the array and print each character */
    for (int i = 0; str[i] != '\0'; i++)
    {
        putchar(str[i]);
    }

    /* return 0 to indicate success */
    return (0);
}
