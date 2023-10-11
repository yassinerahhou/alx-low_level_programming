#include "search_algos.h"
int binary_search(int *array, size_t size, int value)
{
    int left = 0;
    int right = size -1;

    while (left <= right ){
        int i ;
	int mid ;
        printf("Searching in array: ");
        for (i = left ; i < right ; i++){
        printf("%d, ",array[i]);
        }
       printf("%d\n",array[right]);
       mid = left+ (right - left)/2;

    if (array[mid] == value){
        return mid;}

    else if (array[mid] < value){
        left = mid +1;


    }else{
        right = mid -1;
    }

}
return (-1);
}
