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
 * @file data.c
 * @brief Convert data between integer and ASCII character array data types.
 *
 * This file will peform some basic data manipulation. Specifically, the
 * functions in this file converts data from standard integer type to 
 * an ASCII character string and vice-versa.
 *
 * @author Bryan Grant
 * @date 6/27/2018
 *
 */
#include "data.h"
#include "platform.h"

#define MAX_ASCII_BYTES 12 	// Max Base 2: 4,294,967,296 (2^32) => 10 + 2([-] and "\0") digits 

const char * ascii = "0123456789ABCDEF";	// Constant ASCII array for base digits

uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base) {
  uint8_t digits = 1;
  uint8_t index = 0;
  int32_t inVal = data;

  *(ptr) = '\0';				// Initialize array with NULL character
  if (base < 2 || base > 16) return digits;	// Return NULL ASCII if base outside 2-16

  while(data >= base) { 			// Find least significant to most significant digit
    index = data % base;			// Remainder of data/base = digit
    *(ptr+digits++) = *(ascii+index);		// Use const ASCII array to convert digit value
    data /= base;				// Update data value for next digit
  }
  index = data % base;				// Add last digit to pointer array
  *(ptr+digits++) = *(ascii+index);

  if (inVal < 0 && base == 10) {		// Add ASCII negative sign, if negative and base-10
    *(ptr+digits++) = (char)'-';
  }

  for (uint8_t i=0; i<digits/2; i++) {		// Reverse order of character array
    uint8_t temp = *(ptr+digits-1-i);
    *(ptr+digits-1-i) = *(ptr+i);
    *(ptr+i) = temp;
  }

  return digits;
}

int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base) {
  int32_t num = 0;
  int32_t val, exp, digit;
  uint8_t isNeg = 0;

  for (uint8_t i=0; i<digits-1; i++) {
    if (*(ptr+i) == '-' && i == 0) isNeg = 1;	// Check for '-' symbol (Base 10, negative number)
    else {
      for (uint8_t k=0; k<16; k++) {		// Iterate over const array to convert ASCII digit to integer
        if (*(ptr+i) == *(ascii+k)) {
          digit = k;
          break;
        }
      }
      if (isNeg == 1) exp = digits-3-i;			// Determine exponent for each digit
      else exp = digits-2-i;				// If negative sign, calculated value is one less
      val = digit;
      for (uint8_t j=0; j<exp; j++) val *= base;	// Use for loop to do exponent calculation
      num += val;					// Sum value for all digits
    }
  }

  if (isNeg == 1 && base == 10) num *= -1;		// If (-) sign used, make integer value negative.

  return num;
}
