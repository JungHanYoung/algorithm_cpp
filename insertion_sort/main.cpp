//
//  main.cpp
//  insertion_sort
//
//  Created by Hanyoung Jeong on 2018. 3. 17..
//  Copyright © 2018년 Hanyoung Jeong. All rights reserved.
//

#include <stdio.h>

void insertion_sort(int *array, int count);
void printArray(int *array, int count);

int main(void){
    
    int array[] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    int arrayLength = sizeof(array)/sizeof(array[0]);
    
    printf("===== INSERTION SORT =====\n\n");
    printf("Before insertion sort\n\n");
    printArray(array, arrayLength);
    
    // Insertion sort is starting ..
    
    insertion_sort(array, arrayLength);
    
    printf("After insertion sort\n\n");
    printArray(array, arrayLength);
    
    return 0;
    
}

void insertion_sort(int *array, int count){
    for(int i = 0 ; i < count - 1 ; i++){
        int j = i;
        while(array[j] > array[j + 1]){
            int temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
            j--;
        }
    }
}

void printArray(int *array, int count){
    for(int i = 0 ; i < count ; i++){
        printf("%d ", array[i]);
    }
    printf("\n\n");
}
