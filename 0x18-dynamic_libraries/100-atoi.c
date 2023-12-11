#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 * Return: the converted integer
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    /* Step 1: Skip leading spaces */
    while (s[i] == ' ')
        i++;

    /* Step 2: Determine the sign */
    if (s[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (s[i] == '+')
    {
        i++;
    }

    /* Step 3 and 4: Convert characters to digits and keep track of running total */
    while (s[i] >= '0' && s[i] <= '9')
    {
        /* Handle overflow */
        if (result > (INT_MAX - (s[i] - '0')) / 10)
        {
            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }

        result = result * 10 + (s[i] - '0');
        i++;
    }

    /* Step 5: Apply the sign and return the result */
    return sign * result;
}
