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
 * @file stats.h
 * @brief Analyze array of data and provide some statistical analysis.
 *
 * This program will take in an array of unsigned char data items and report
 * analytics on the maximum, minimum, mean, and median. This program will also
 * sort the data from largest to smallest and present the data to the screen in 
 * a nicely formatted presentation. All statistics will be rounded down to the 
 * nearest integer.
 *
 * @author Bryan Grant
 * @date 6/6/2018
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints statistical data of input array.
 *
 * This function takes a unsigned char pointer to an unsigned char array and 
 * the length of that array as an unsigned int. The function then prints the 
 * statistics ofthat data including the maximum, minimun, mean, and median to 
 * the screen in a nicely formatted manner.
 *
 * @param array An unsigned char pointer to the n-element data array
 * @param length The unsigned int length of data array
 *
 * @return N/A (--print to screen--)
 */
void print_statistics(unsigned char * array, unsigned int length);


/**
 * @brief Prints input array to the screen.
 *
 * This function takes a unsigned char pointer to an unsigned char array and 
 * the length of that array as an unsigned int. The function then prints the 
 * data in the array to the screen.
 *
 * @param array An unsigned char pointer to the n-element data array
 * @param length The unsigned int length of data array
 *
 * @return N/A (--print to screen--)
 */
void print_array(unsigned char * array, unsigned int length);


/**
 * @brief Finds median value of unsigned char array.
 *
 * This function takes a unsigned char pointer to an unsigned char array and 
 * the length of that array as an unsigned int. The function then sorts the 
 * data, finds the median value, and returns that value as an unsigned char.
 *
 * @param array An unsigned char pointer to the n-element data array
 * @param length The unsigned int length of data array
 *
 * @return The median value of the array as an unsigned char
 */
unsigned char find_median(unsigned char * array, unsigned int length);


/**
 * @brief Finds mean value of unsigned char array.
 *
 * This function takes a unsigned char pointer to an unsigned char array and 
 * the length of that array as an unsigned int. The function then finds the 
 * mean value and returns that value as an unsigned char.
 *
 * @param array An unsigned char pointer to the n-element data array
 * @param length The unsigned int length of data array
 *
 * @return The mean value of the array as an unsigned char
 */
unsigned char find_mean(unsigned char * array, unsigned int length);


/**
 * @brief Finds maximum value of unsigned char array.
 *
 * This function takes a unsigned char pointer to an unsigned char array and 
 * the length of that array as an unsigned int. The function then finds the 
 * maximum value and returns that value as an unsigned char.
 *
 * @param array An unsigned char pointer to the n-element data array
 * @param length The unsigned int length of data array
 *
 * @return The maximum value of the array as an unsigned char
 */
unsigned char find_maximum(unsigned char * array, unsigned int length);


/**
 * @brief Finds minimum value of unsigned char array.
 *
 * This function takes a unsigned char pointer to an unsigned char array and 
 * the length of that array as an unsigned int. The function then finds the 
 * minimum value and returns that value as an unsigned char.
 *
 * @param array An unsigned char pointer to the n-element data array
 * @param length The unsigned int length of data array
 *
 * @return The minimum value of the array as an unsigned char
 */
unsigned char find_minimum(unsigned char * array, unsigned int length);


/**
 * @brief Sorts data array from largest to smallest.
 *
 * This function takes a unsigned char pointer to an unsigned char array and 
 * the length of that array as an unsigned int. The function then sorts the 
 * data in the input array from largest to smallest.
 *
 * @param array An unsigned char pointer to the n-element data array
 * @param length The unsigned int length of data array
 *
 * @return N/A (--sorts data in input data array--)
 */
void sort_array(unsigned char * array, unsigned int length);

#endif /* __STATS_H__ */
