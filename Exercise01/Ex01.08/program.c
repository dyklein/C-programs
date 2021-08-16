/**
 * @file Program.c
 * @author Daniel Klein
 * @brief print out the second largest and smallest number from input
 * @version 0.1
 * @date 2021-08-10
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <stdio.h>
#include <ctype.h>
#include "Stack.h"
 /**
  * @brief compare two ints
  *
  * @param a first int
  * @param b second int
  * @return int the bigger int
  */
int Compare(const void *first, const void *second);
/**
 * @brief Test ou the function for smallest and largest number
 *
 * @return int
 */
int main(void)
{
    node *stack = NULL;
    int number = 0;
    char term;
    while (1)
    {
        if (scanf("%d%c", &number, &term) != 2 || term != '\n')
        {
            fflush(stdin);
        }
        else
        {
            if (number != 0)
            {
                stack = Push(number, stack);
            }
            else
            {
                if (StackSize(stack) > 2)
                {
                    int stackSize = StackSize(stack);
                    int array[stackSize];
                    for (int i = 0; i < stackSize; i++)
                    {
                        array[i] = stack->data;
                        stack = Pop(stack);
                    }
                    qsort(array, stackSize, sizeof(int), Compare);
                    printf("%d ", array[stackSize - 2]);
                    printf("%d ", array[1]);
                }
                break;

            }
        }
    }


    return 0;
}

int Compare(const void *first, const void *second)
{
    return (*(int *) first - *(int *) second);
}