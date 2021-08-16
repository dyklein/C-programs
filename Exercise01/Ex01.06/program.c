/**
 * @file Program.c
 * @author Daniel Klein
 * @brief correct the missing check sum in israel id
 * @version 0.1
 * @date 2021-08-10
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <stdio.h>
#include <math.h>
 /**
  * @brief Check if a 9 digit id is a valid israeli id
  *
  * @param id number representing the id of the user
  * @return int 1 for true and 0 for false
  */
int validIsraelID(int id);
/**
 * @brief receive a id of length 8 and fix it
 *
 * @param id id which is missing the check sum
 * @return int  return the missing check sum number
 */
int fixIsraelID(int id);
/**
 * @brief test the id corrector function
 *
 * @return int
 */
int main(void)
{
    int id = 0;
    scanf("%d", &id);
    if (id != 0)
    {
        if ((1 + (int) log10(id)) == 8)
        {
            printf("missing check sum is %d", fixIsraelID(id));
        }
    }



    return 0;
}

int fixIsraelID(int id)
{
    int result;
    id = id * 10;
    for (int i = 0; i < 10; i++)
    {
        if (validIsraelID(id) == 1)
        {
            result = i;
        }
        id++;
    }
    return result;
}

int validIsraelID(int id)
{
    int numberArray[9];
    int index = 8;

    while (id != 0)
    {
        numberArray[index] = id % 10;
        id /= 10;
        index--;
    }
    for (int i = 0; i < 9; i++)
    {
        if ((i % 2) == 1)
        {
            int numberHolder = numberArray[i] * 2;
            if (numberHolder > 9)
            {
                numberArray[i] = numberHolder - 9;
            }
            else
            {
                numberArray[i] = numberHolder;
            }


        }

    }

    int sum = 0;
    for (int i = 0; i < 9; i++)
    {
        sum += numberArray[i];
    }
    if ((sum % 10) == 0)
    {
        return 1;
    }

    return 0;

}

