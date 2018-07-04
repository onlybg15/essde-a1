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
 * @file memory.h
 * @brief Abstraction of memory read and write operations
 *
 * This header file provides an abstraction of reading and
 * writing to memory via function calls. 
 *
 * @author Alex Fosdick
 * @date April 1 2017
 *
 */
#ifndef __MEMORY_H__
#define __MEMORY_H__

#include <stdlib.h>
#include <stdint.h>

/**
 * @brief Sets a value of a data array 
 *
 * Given a pointer to a char data set, this will set a provided
 * index into that data set to the value provided.
 *
 * @param ptr Pointer to data array
 * @param index Index into pointer array to set value
 * @param value value to write the the locaiton
 *
 * @return void.
 */
void set_value(char * ptr, unsigned int index, char value);

/**
 * @brief Clear a value of a data array 
 *
 * Given a pointer to a char data set, this will clear a provided
 * index into that data set to the value zero.
 *
 * @param ptr Pointer to data array
 * @param index Index into pointer array to set value
 *
 * @return void.
 */
void clear_value(char * ptr, unsigned int index);

/**
 * @brief Returns a value of a data array 
 *
 * Given a pointer to a char data set, this will read the provided
 * index into that data set and return the value.
 *
 * @param ptr Pointer to data array
 * @param index Index into pointer array to set value
 *
 * @return Value to be read.
 */
char get_value(char * ptr, unsigned int index);

/**
 * @brief Sets data array elements to a value
 *
 * Given a pointer to a char data set, this will set a number of elements
 * from a provided data array to the given value. The length is determined
 * by the provided size parameter.
 *
 * @param ptr Pointer to data array
 * @param value value to write the the locaiton
 * @param size Number of elements to set to value
 *
 * @return void.
 */
void set_all(char * ptr, char value, unsigned int size);

/**
 * @brief Clears elements in a data array
 *
 * Given a pointer to a char data set, this will set a clear a number
 * of elements given the size provided. Clear means to set to zero. 
 *
 * @param ptr Pointer to data array
 * @param size Number of elements to set to zero
 *
 * @return void.
 */
void clear_all(char * ptr, unsigned int size);

/**
 * @brief Moves a certain length of data from one location in memory to
 *        another.
 *
 * Given two pointers (one source location and one destination location),
 * this function moves a desired length of data in memory. It then returns
 * a pointer to the destination.
 *
 * @param src Pointer to source location in memory
 * @param dst Pointer to destination location in memory
 * @param length Length of bytes to move
 *
 * @return Pointer to destination
 */
uint8_t * my_memmove(uint8_t * src, uint8_t * dst, size_t length);

/**
 * @brief Copies a certain length of data from one location in memory to
 *        another.
 *
 * Given two pointers (one source location and one destination location),
 * this function copies a desired length of data in memory. It then returns
 * a pointer to the destination.
 *
 * @param src Pointer to source location in memory
 * @param dst Pointer to destination location in memory
 * @param length Length of bytes to copy
 *
 * @return Pointer to destination
 */
uint8_t * my_memcopy(uint8_t * src, uint8_t * dst, size_t length);

/**
 * @brief Set a certain length of memory to a desired value.
 *
 * This function takes a memory location and sets a certain length of 
 * memory to a desired value. It then returns a pointer to the source.
 *
 * @param src Pointer to source location in memory
 * @param length Length of bytes to set
 * @param length Value to set memory
 *
 * @return Pointer to source
 */
uint8_t * my_memset(uint8_t * src, size_t length, uint8_t value);

/**
 * @brief Zeroes a certain length of memory.
 *
 * This function takes a memory location and set a certain length of 
 * memory to zero. It then returns a pointer to the source.
 *
 * @param src Pointer to source location in memory
 * @param length Length of bytes to zero
 *
 * @return Pointer to source
 */
uint8_t * my_memzero(uint8_t * src, size_t length);

/**
 * @brief Reverses the data in a certain length of memory.
 *
 * This function takes a memory location and a certain length of 
 * memory. It then reverses the data stored in the desired length of
 * memory. It then returns a pointer to the source.
 *
 * @param src Pointer to source location in memory
 * @param length Length of bytes to reverse
 *
 * @return Pointer to source
 */
uint8_t * my_reverse(uint8_t * src, size_t length);

/**
 * @brief Reserves a certain number of words to allocate in dynamic
 *        memory.
 *
 * This function takes a certain length of memory, and tries to allocate
 * the desired amount in dynamic memory. It then returns a pointer to 
 * the memory location if successful, or the Null Pointer, if not.
 *
 * @param length Length of bytes to reserve
 *
 * @return Pointer to memory if successful, Null Pointer if not
 */
uint32_t * reserve_words(size_t length);

/**
 * @brief Frees a dynamic memory allocation.
 *
 * This function takes a pointer to a dynamic memory location, and frees 
 * the data stored there.
 *
 * @param src Pointer to source location in dynamic memory
 *
 * @return void
 */
void free_words(uint32_t * src);

#endif /* __MEMORY_H__ */
