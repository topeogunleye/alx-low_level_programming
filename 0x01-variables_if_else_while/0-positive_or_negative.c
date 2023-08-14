#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
printf("%d\n", n); /* print the number */
if (n > 0) /* check if positive */
{
	printf("is positive\n"); /* print positive message */
}
else if (n == 0) /* check if zero */
{
	printf("is zero\n"); /* print zero message */
}
else /* otherwise, it is negative */
{
	printf("is negative\n"); /* print negative message */
}
	return (0);
}
