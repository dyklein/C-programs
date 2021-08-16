/**
 * @file Program.c
 * @author Daniel Klein
 * @brief print out numbers in reverse order
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
  * @brief append to ints together
  *
  * @param first first int
  * @param second second int
  * @return int containing the new int
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
                while (stack != NULL)
                {
                    printf("%d ", stack->data);
                    stack = Pop(stack);
                }
                break;
            }
        }
    }


    return 0;
}
