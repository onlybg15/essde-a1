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
 * @file stats.c
 * @brief Analyze array of data and provide some statistical analysis.
 *
 * This program will take in an array of unsigned char data items and report
 * analytics on the maximum, minimum, mean, and median. This program will also
 * sort the data from largest to smallest present the data to the screen in a 
 * nicely formatted presentation. All statistics will be rounded down to the 
 * nearest integer.
 *
 * @author Bryan Grant
 * @date 6/6/2018
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

void print_statistics(unsigned char * array, unsigned int length) {

}

void print_array(unsigned char * array, unsigned int length) {

}

unsigned char find_median(unsigned char * array, unsigned int length) {

}

unsigned char find_mean(unsigned char * array, unsigned int length) {

}

unsigned char find_maximum(unsigned char * array, unsigned int length) {

}

unsigned char find_minimum(unsigned char * array, unsigned int length) {

}

void sort_array(unsigned char * array, unsigned int length) {

}
