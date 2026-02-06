#include <stdio.h>
#include "sort.h"   //don't forget include prototype

void selection_sort(int arr[], int n){

    for(int j=0; j<n-1; j++){
        int min_index = j;

        for(int k=j+1; k<n; k++){
            if(arr[k] < arr[min_index]){
                min_index = k;
            }
        }

        int temp = arr[min_index];
        arr[min_index] = arr[j];
        arr[j] = temp;
    }

    for(int j=0; j<n; j++){
        printf("%d, ", arr[j]);
    }
    printf("\n");
}

void bubble_sort(int arr[], int n){

    for(int k=0; k<n-1; k++){
        for(int j=0; j<n-k-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int j=0; j<n; j++){
        printf("%d, ", arr[j]);
    }

    printf("\n");
}
