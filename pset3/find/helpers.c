/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>
#include <stdio.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    if(n <= 0)
        return false;
        
    int end = n - 1;    
    int start = 0;
    while(start <= end){
        int mid = (end + start)/2;
        if(values[mid]==value)
            return true;
        else if (value < values[mid])
            end = mid - 1;
        else 
            start = mid + 1;
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int min;
    for(int i = 0; i < n-1; i++){
        min = i;
        for(int j = i; j < n; j++){
            if(values[j]<values[min]) 
                min = j;
        }
        if(min != i){
            int temp = values[i];
            values[i]=values[min];
            values[min] = temp;
        }
    }
}
