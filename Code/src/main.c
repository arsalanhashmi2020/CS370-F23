/**
 * @file main.c
 * @brief This is the main file for the shell. It contains the main function and the loop that runs the shell.
 * @version 0.1
 * @date 2023-06-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "utils.h"

#include <stdlib.h>
#include <stdio.h>

/**
 * @brief This is the main function for the shell. It contains the main loop that runs the shell.
 * 
 * @return int 
 */
int main()
{
    LOG_PRINT("Hello World!\n");
    LOG_DEBUG("A debug statement\n");
    LOG_ERROR("An error statement\n");

    return 0;
}
