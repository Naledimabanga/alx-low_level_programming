#include "main.h"

/**
 * helperfunction - Makes possible to evaluate from 1 to i
 * @num: same number as i
 * @i: number that iterates from 1 to i
 *
 * Return: 0 if not prime, 1 if prime.
 */
int helperfunction(int num, int i)
{
	if (num == i)
		return (1);
	else if (num % i == 0)
		return (0);
	return (helperfunction(num, i + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: 1 if number is prime.
 * 0 if number is not prime.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (helperfunction(n, 2));
}

