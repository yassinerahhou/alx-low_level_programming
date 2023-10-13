#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches using jump search.
 * @array: A pointer to the first element of the array to search.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: The index of the first occurrence of 'value' in 'array' or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
    size_t i ,start = 0, end= sqrt(size);

    while(array[end]< value && start<size){
        printf("Value checked array[%ld] = [%d]\n", start, array[start]);
        start = end ;
        end = end + sqrt(size);
        if (end >size -1) end =size;

    }
    printf("Value found between indexes [%ld] and [%d]\n", start, array[end]);
    for (i=start;i <= end ; i++){

        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if(array[i]== value)

            return i;
    }

    return -1;
}
