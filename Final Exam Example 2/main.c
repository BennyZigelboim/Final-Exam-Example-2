#include <stdio.h>
#include "BoomTrach.h"


int main()
{
    printf_s("Please enter a number: ");

    unsigned int max;
    scanf_s("%d", &max);

    BoomTrach(max);

    printf_s("\nGoodbye!\n");
}
