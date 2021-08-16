/**
 * @file Stack.c
 * @author Daniel Klein
 * @brief create a stack
 * @version 0.1
 * @date 2021-08-10
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

 /**
  * @brief Push contents onto the stack
  *
  * @param data the number that you wish to add to the stack
  * @param stack the head of the stack
  * @return node* The updated stack
  */
node *Push(int data, node *stack)
{
    node *newNode = malloc(sizeof(node));
    newNode->data = data;
    newNode->next = stack;
    return newNode;
}


/**
 * @brief pop the top data from the stack
 *
 * @param stack the top of the stack
 * @return node*  the updated stack
 */
node *Pop(node *stack)
{
    if (stack != NULL)
    {
        node *top = stack->next;
        free(stack);
        return top;
    }
    else
    {
        return NULL;
    }


}