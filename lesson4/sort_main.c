/**
 * @author Hide
 * @date 2023/7/18
 * @brief selection and bubble sort function
 */

#include <stdio.h>
#include "sort.h"

int main()
{
    int i = 10;
    int data[] = {15,30,41,12,21,47,24,9,18,45};
    int raw_data[10];

    //copy the raw data
    for(int j=0; j<i; j++){
        raw_data[j] = data[j];
        printf("%d, ", data[j]);
    }
    printf("\n");

    selection_sort(data, i);

    for(int j=0; j<i; j++){
        data[j] = raw_data[j];
    }

    bubble_sort(data, i);

    //Output the raw data
    for(int j=0; j<i; j++){
        printf("%d, ", raw_data[j]);
    }
    printf("\n");

    return 0;
}
