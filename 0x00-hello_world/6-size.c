#include <stdio.h>
/* 
 * This program prints the size of char, int, long int, and float types.
 * It returns "Size of a $var"
 */
int main(void)
{
// Print the size of char, int, long int, and float types
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));

return (0);
}
