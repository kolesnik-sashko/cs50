/**************************************************************************** 
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 ***************************************************************************/
       
#include <cs50.h>

#include "helpers.h"


/*
 * Returns true if value is in array of n values, else false.
 */

bool 
search(int value, int array[], int n)
{
    // TODO: re-implement as binary search
   /*   for (int i = 0; i < n; i++)
        if (array[i] == value)
            return true;
    return false;*/
    int high, low, i;
    high = n;
    low = 0;
    sort(array, n);
    i = (high + low)/2;
    if (value < array[0] || value > array[n - 1])
        return false;
    else
        while(array[i])
        {
            if(array[i] == value)
                return true;
            else if(value > array[i])
                low = i;
            else
                high = i;
            i = (high + low)/2;
        }
    return 0;
}


/*
 * Sorts array of n values.
 */
void 
sort(int values[], int n)
{
    // TODO: implement an O(n^2) sort
    int tmp;
    int i,j;
    for(i = 0; i < n; i++)
        for(j = i + 1; j < n; j++)
            if(values[i] > values[j])
            {
                tmp = values[j];
                values[j] = values[i];
                values[i] = tmp; 
            }
    
    return;
}
