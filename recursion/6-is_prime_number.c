#include "main.h"

/**
 * isprime - function that checks the prime number
 * @i: integer
 * @div: integer
 * Return: 1
 */

int isprime(int i, int div)
{
if (i == div)
{
return (1);
}
if (i % div == 0)

return (0);

return (isprime(i, div + 1));

}

/**
 * is_prime_number - function that checks the prime number
 * @i: integer
 * Return: 1
 */

int is_prime_number(int i)
{
	int div = 3;

	if (i % 2 == 0 || i < 2)

		return (0);

	if (i == 2)

		return (1);

	return (isprime(i, div));

}
