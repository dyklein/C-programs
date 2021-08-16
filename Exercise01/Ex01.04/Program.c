/**
 * @file Program.c
 * @author Daniel Klein
 * @brief Test the PrintDiamond function
 * @version 0.1
 * @date 2021-08-10
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <stdio.h>
#include "PrintDiamond.h"


 /**
  * @brief test the diamond function
  *
  * @return int
  */
int main(void)
{
    int myInt;
    int result = scanf("%d", &myInt);
    if (result != 0)
    {

        PrintDiamond(myInt);


    }


    return 0;
}

