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
	print_statistics(test,SIZE) ; 

}

/* Add other Implementation File Code Here */

void print_statistics( unsigned char *arr , unsigned int size ) {

	print_array(arr,size);
	sort_array(arr,size) ; 
	printf("\nmedian = %d ",find_median(arr,size));
	printf("\nmean = %d ",find_mean(arr,size));
	printf("\nminimum = %d ",find_minimum(arr,size));
	printf("\nmaximum = %d ",find_maximum(arr,size));

}


void print_array( unsigned char *arr  , unsigned int size ){

	for( int i = 0 ; i < size ; i++ ){

        	printf("\ntest[%d] = %d ",i,arr[i]) ; 

	}


}


void sort_array( unsigned char *arr  , unsigned int size ){

	unsigned char i=0 , j=0 , temp=0 ;

    	for(i=0 ; i<size ; i++)
	    {
		for(j=0 ; j<size-1 ; j++)
		{
		    if( arr[j] < arr[j+1] )
		    {
		        temp      = arr[j];
		        arr[j]    = arr[j+1];
		        arr[j+1]  = temp;
		    }
		}
	    }

}

unsigned char find_median( unsigned char *arr  , unsigned int size ){
	unsigned char median=0;
	    // if number of elements are even
    	if(size%2 == 0){
		median = (arr[(size-1)/2] + arr[size/2])/2.0;
  	}
   	   // if number of elements are odd
    	else{
		median = arr[size/2];
	}
    
    	return median;

}

unsigned char find_mean( unsigned char *arr  , unsigned int size ){
	unsigned char mean;
	unsigned int SUM ; 
	for(int i=0 ; i<size ; i++){
		
		SUM += arr[i] ;	
	}
	mean = SUM / size ; 
	return mean ; 

}

unsigned char find_minimum( unsigned char *arr  , unsigned int size ){
	unsigned char min = arr[0] ; 
	for( int i =0 ; i< SIZE ; i++ ){
		if( arr[i] < min ){
			min = arr[i] ; 
		}

	
	}
	return min ; 


}

unsigned char find_maximum ( unsigned char *arr  , unsigned int size ){

	unsigned char max = arr[0] ; 
	for( int i =0 ; i< SIZE ; i++ ){
		if( arr[i] > max ){
			max = arr[i] ; 
		}

	
	}
	return max ; 

}

