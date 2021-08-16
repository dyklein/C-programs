/**
 * @file Program.c
 * @author Daniel Klein
 * @brief print out charater that is input
 * @version 0.1
 * @date 2021-08-10
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <stdio.h>
#include <ctype.h>

 /**
  * @brief receives character input from the user and prints it
  *
  * @return int
  */
int main(void)
{
    char charater;

    while (1)
    {
        scanf(" %c", &charater);
        fflush(stdin);
        // validate input
        if (charater == 'q' || charater == 'Q')
        {
            break;
        }
        printf("%c\n", charater);
    }
    return 0;
}