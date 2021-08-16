/**
 * @file Stack.h
 * @author Daniel Klein
 * @brief create a stack
 * @version 0.1
 * @date 2021-08-10
 *
 * @copyright Copyright (c) 2021
 *
 */
#ifndef Stack_h
#define Stack_h

#include <stdio.h>
#include <stdlib.h>

 /**
  * @brief This a struct for the stack
  *
  */
typedef struct node
{
    int data;
    struct node *next;
}node;

/**
 * @brief Push contents onto the stack
 *
 * @param data the number that you wish to add to the stack
 * @param stack the head of the stack
 * @return node* The updated stack
 */
node *Push(int data, node *stack);
/**
 * @brief pop the top data from the stack
 *
 * @param stack the top of the stack
 * @return node*  the updated stack
 */
node *Pop(node *stack);


#endif // !Stack_h