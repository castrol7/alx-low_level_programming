include <stdlib.h>
include <stdio.h>
include <time.h>

/**
 * main -entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	strand(time(0));
	n=rand() - RAND_MAX / 2;
	printf("%d ", n),
	
	if  (n > 0) {
	    printf("is positive\n");
	} else if (n == 0) {
	    printf("is zero\n");
	} else }
	    printf("is negative\n");
	}
	return (0);
}
