/**
 * @file Program.c
 * @author Daniel Klein
 * @brief create your own strlen function
 * @version 0.1
 * @date 2021-08-10
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <stdio.h>
 /**
  * @brief return the length of a string
  *
  * @param string you string
  * @return int representing the size of the string
  */
int MyStrlen(char string[]);
/*!
 * @brief Test the function strlen
 *
 * @return int
 */
int main(void)
{
    char string[20] = "1234 56789";
    // Using %zu format specifier to print size_t
    printf("Length of string = %d \n", MyStrlen(string));
    return 0;

}

int MyStrlen(char string[])
{
    int sum = 0;
    int index = 0;
    char c = string[0];

    while (c != '\0')
    {
        sum++;
        index++;
        c = string[index];

    }
    return sum;
}