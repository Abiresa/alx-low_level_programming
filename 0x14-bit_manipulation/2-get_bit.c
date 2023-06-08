#include "main.h"
/**
 * get_bit - It returns the value of a bit at a certain index
 * in the form of a decimal number
 * @n: The number to search
 * @index: index of the bit
 * Return: The value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);
	bit_val = (n >> index) & 1;
	return (bit_val);
}
