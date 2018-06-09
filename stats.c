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
 * @date 6/9/2018
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
  printf("Unsorted Array:\n");
  print_array(test, SIZE);

  printf("\nSorted Array:\n");
  sort_array(test, SIZE);
  print_array(test, SIZE);

  print_statistics(test, SIZE);

}

void print_statistics(unsigned char * array, unsigned int length) {
  printf("\nArray Statistics:\n");
  printf("Median: %d\n", find_median(array,length));
  printf("Mean: %d\n", find_mean(array,length));
  printf("Maximum: %d\n", find_maximum(array,length));
  printf("Minimum: %d\n", find_minimum(array,length));
}

void print_array(unsigned char * array, unsigned int length) {
  for (int i=0; i<length; i++) {
    printf("Index: %d --- Value: %d\n", i, array[i]);
  }
}

unsigned char find_median(unsigned char * array, unsigned int length) {
  unsigned char median = 0;
  unsigned int mindex = length/2;

  sort_array(array, length);

  if (length%2==0) {
    median = (array[mindex] + array[mindex-1])/2;
  } else {
    median = array[mindex];
  }
  //printf("%d, %d\n", mindex, median);
  return median;
}

unsigned char find_mean(unsigned char * array, unsigned int length) {
  unsigned char mean = 0;
  unsigned int sum = 0;
  for (int i=0; i<length; i++) {
    sum += array[i];
  }
  mean = (unsigned char)(sum/length);
  //printf("%d, %d\n", sum, length);
  return mean;
}

unsigned char find_maximum(unsigned char * array, unsigned int length) {
  unsigned char max = 0;
  for (int i=0; i<length; i++) {
    if (i==0) max = array[i];
    else if (array[i]>max) max = array[i];
  }
  return max;
}

unsigned char find_minimum(unsigned char * array, unsigned int length) {
  unsigned char min = 0;
  for (int i=0; i<length; i++) {
    if (i==0) min = array[i];
    else if (array[i]<min) min = array[i];
  }
  return min;
}

void sort_array(unsigned char * array, unsigned int length) {
  if (length == 1) return;
  else {
    for (int i=0; i<length-1; i++) {
      if (array[i]<array[i+1]) {
        unsigned char swap = array[i];
        array[i] = array[i+1];
        array[i+1] = swap;
      }
    }
    sort_array(array, length-1);
  } 
}
