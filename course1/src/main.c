/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file main.c
 * @brief Main entry point to the Course 1 Final Assessment
 *
 * This file contains the main code for the Course 1 Final assessment. This 
 * function calls the course1 function in the course1.c source file using a 
 * complie time switch (-DCOURSE1).
 *
 * @author Bryan Grant
 * @date June 27, 2018
 *
 */
#include "course1.h"

/* Main Function */
int main(void) {
  
  #ifdef COURSE1
    course1();
  #endif

  return 0;
}

