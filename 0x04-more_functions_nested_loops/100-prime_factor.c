#include <stdio.h>
#include <math.h>

/**
 * is_prime - Check if a number is prime
 * @num: The number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(long num)
{
    if (num <= 1)
        return 0;

    if (num <= 3)
        return 1;

    if (num % 2 == 0 || num % 3 == 0)
        return 0;

    for (long i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return 0;
    }

    return 1;
}

/**
 * largest_prime_factor - Find the largest prime factor of a number
 * @num: The number to find the largest prime factor of
 *
 * Return: The largest prime factor
 */
long largest_prime_factor(long num)
{
    long max_prime = -1;

    while (num % 2 == 0)
    {
        max_prime = 2;
        num /= 2;
    }

    for (long i = 3; i <= sqrt(num); i += 2)
    {
        while (num % i == 0)
        {
            max_prime = i;
            num /= i;
        }
    }

    if (num > 2)
        max_prime = num;

    return max_prime;
}

int main(void)
{
    long num = 612852475143;
    long result = largest_prime_factor(num);

    printf("%ld\n", result);

    return 0;
}

