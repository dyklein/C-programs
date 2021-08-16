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

#ifndef PrintDiamond_h
#define PrintDiamond_h


 /**
  * @brief receives an odd integer and prints a “diamond” made of ‘*
  *
  * @param number The max number of * to print out
  */
void PrintDiamond(int number);

/**
 * @brief Check if the number passes id negative
 *
 * @param number The Number that is being checked
 * @return int Return 1 if true and 0 if false
 */
int CheckForNegative(int number);

#endif // !PrintDiamond_h