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
 * @file <stats.c> 
 * @brief <.c file to implement 8 functions >
 * @author <Ahmed Galal>
 * @date <6/1/2020 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/* Add Your Declarations and Function Comments here */ 
void print_array( unsigned char *arr  , unsigned int size ) ;

/**
 * @brief < Given an array of data and a length, prints the array to the screen >
 *
 * < this function will loop through array given to it and print each elemnt with its index  >
 *
 * @param *arr pointer which points to address  of the given array
 * @param size the size of the array 
 *
 * @return the functions doesn't return anything , it just prints the elemnts of the array 
 */

void sort_array( unsigned char *arr  , unsigned int size ) ;

/**
 * @brief < it sorts the array given to it >
 *
 * <  Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )  >
 *
 * @param *arr pointer which points to address  of the given array
 * @param size the size of the array 
 *
 * @return the functions doesn't return anything , it just sorts the elemnts of the array 
 */

unsigned char find_median( unsigned char *arr  , unsigned int size ) ;

/**
 * @brief < finds the median of elemnts of an array given to it  >
 *
 * <  Given an array of data and a length, returns the median value but the elements must be sorted . if array size is odd , the median will be the average of the 2 elemnts in the of the array . if the array size is even , then the median will be the elemnt which in the half of the array  >
 *
 * @param *arr pointer which points to address  of the given array
 * @param size the size of the array 
 *
 * @return the median of the  array 
 */

unsigned char find_mean( unsigned char *arr  , unsigned int size );
/**
 * 
 * @brief < finds the median of elemnts of an array given to it  >
 *
 * < this function loops through the elemnts and get the sum of them then divide the sum by the size to get the mean > 
 *
 * @param *arr pointer which points to address  of the given array
 * @param size the size of the array 
 *
 * @return the mean value 
 */  
unsigned char find_minimum( unsigned char *arr  , unsigned int size ) ; 
/**
 * 
 * @brief < Given an array of data and a length, returns the minimum  >
 *
 * < this function loops through the elemnts and get the minimum > 
 *
 * @param *arr pointer which points to address  of the given array
 * @param size the size of the array 
 *
 * @return the minimum value 
 */

unsigned char find_maximum( unsigned char *arr  , unsigned int size ) ; 
/**
 * 
 * @brief < Given an array of data and a length, returns the maximum  >
 *
 * < this function loops through the elemnts and get the maximum > 
 *
 * @param *arr pointer which points to address  of the given array
 * @param size the size of the array 
 *
 * @return the maximum value 
 */

void print_statistics( unsigned char *arr , unsigned int size );
/**
 * 
 * @brief < A function that prints the statistics of an array including minimum, maximum, mean, and median  >
 *
 * < this function calls the above functions to print the minimum , maximum , mean , median > 
 *
 * @param *arr pointer which points to address  of the given array
 * @param size the size of the array 
 *
 * @return the functions doesn't return, it just prints the statistics
 */

#endif /* __STATS_H__ */
