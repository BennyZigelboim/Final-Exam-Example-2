#include <stdio.h>
#include <stdbool.h>
#include "BoomTrach.h"


_Bool DividedByX(unsigned int number, unsigned int x)
{
    if (x == 0)
    {
        return false;
    }

    return number % x == 0;
}

_Bool ContainsDigit(unsigned int number, unsigned short digit)
{
    unsigned int lastDigit;

    do
    {
        lastDigit = number % 10;

        if (lastDigit == digit)
        {
            return true;
        }
        number /= 10;

    } while (number);

    return false;
}

void BoomTrach(unsigned int max)
{
    _Bool nothingPrinted;

    for (size_t i = 1; i <= max; ++i)
    {
        nothingPrinted = true;

        if (ContainsDigit(i, 3) || DividedByX(i, 3))
        {
            printf_s("Boom\n");
            nothingPrinted = false;
        }

        if (ContainsDigit(i, 5) || DividedByX(i, 5))
        {
            printf_s("Trach\n");
            nothingPrinted = false;
        }

        if (nothingPrinted)
        {
            printf_s("%d\n", i);
        }
    }
}