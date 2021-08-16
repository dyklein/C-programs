/**
 * @file PrintDiamond.h
 * @author Daniel Klein
 * @brief Print diamonds of any size
 * @version 0.1
 * @date 2021-08-10
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <stdio.h>
#include "PrintDiamond.h"

 /**
  * @brief receives an odd integer and prints a “diamond” made of ‘*
  *
  * @param number The max number of * to print out
  */
void PrintDiamond(int number)
{
    if (CheckForNegative(number) == 0)
    {
        return;
    }

    int top = (number / 2) + 1;

    int i, space, k = 0, j = 0;
    for (i = 1; i <= top; ++i, k = 0)
    {
        for (space = 1; space <= top - i; ++space)
        {
            printf("  ");
        }
        while (k != 2 * i - 1)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
    int bottom = (number / 2);

    for (i = bottom; i >= 1; --i)
    {
        printf("  ");
        for (space = 0; space < bottom - i; ++space)
            printf("  ");
        for (j = i; j <= 2 * i - 1; ++j)
            printf("* ");
        for (j = 0; j < i - 1; ++j)
            printf("* ");
        printf("\n");
    }
}

/**
 * @brief Check if the number passes id negative
 *
 * @param number The Number that is being checked
 * @return int Return 1 if true and 0 if false
 */
int CheckForNegative(int number)
{
    int result;
    if (number % 2 == 0)
    {
        result = 0;
    }
    else
    {
        result = 1;
    }

    return result;
}