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
 * @file data.h
 * @brief Convert data between integer and ASCII data types.
 *
 * This file will peform some basic data manipulation. Specifically, the
 * functions in this file will convert data from standard integer type to 
 * an ASCII string and vice-versa.
 *
 * @author Bryan Grant
 * @date 6/27/2018
 *
 */
#ifndef __DATA_H__
#define __DATA_H__

#include <stdint.h>

#define BASE_16 16	// Base value defines for course1.c file.
#define BASE_10 10

/**
 * @brief Converts a standard integer type to an ASCII character array.
 *
 * This function takes a signed 32-bit integer and desired output base value 
 * from 2 to 16, converts the integer to an ASCII character array, and copies 
 * that data to a desired pointer. The function returns the length of the 
 * converted data, places a null terminator at the end of the string, and does 
 * not use standard string functions or libraries.
 *
 * @param data A signed 32-bit integer to convert
 * @param ptr Pointer to the converted character array
 * @param base A unsigned 32-bit integer representing the base to convert to
 *
 * @return The length of the converted character array
 */
uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base);

/**
 * @brief Converts an ASCII character array to a standard integer type.
 *
 * This function takes a pointer to an ASCII character array, the string length, 
 * and the desired base from 2-16. It then converts the ASCII character array to   
 * a signed 32-bit integer. The function returns the converted 32-bit signed  
 * integer and does not use standard string functions or libraries.
 *
 * @param ptr Pointer to the character array to convert
 * @param digits The length of the character array
 * @param base Base of input character array
 *
 * @return The converted 32-bit signed integer of desired base
 */
int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base);

#endif /* __DATA_H__ */
