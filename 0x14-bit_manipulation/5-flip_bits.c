#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 *
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits that need to be flipped in n to obtain m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m; /* XOR of the two numbers */
	unsigned int count = 0;

	while (xor_result != 0)
	{
		count += xor_result & 1; /* Add 1 if the least significant bit is 1 */
		xor_result >>= 1; /* Shift right to check the next bit */
	}

	return (count);
}

