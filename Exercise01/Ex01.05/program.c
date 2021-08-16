/**
 * @file Program.c
 * @author Daniel Klein
 * @brief test the validate israel id function
 * @version 0.1
 * @date 2021-08-10
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <stdio.h>
 /**
  * @brief Check if a 9 digit id is a valid israeli id
  *
  * @param id number representing the id of the user
  * @return int 1 for true and 0 for false
  */
int ValidIsraelID(int id);
/**
 * @brief test the id function
 *
 * @return int
 */
int main(void)
{

    if (ValidIsraelID(343808119) == 1)
    {
        printf("valid id");
    }
    else
    {
        printf("invalid id");
    }


    return 0;
}
int ValidIsraelID(int id)
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

