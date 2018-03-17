//
//  main.cpp
//  selection_sort
//
//  Created by Hanyoung Jeong on 2018. 3. 17..
//  Copyright © 2018년 Hanyoung Jeong. All rights reserved.
//

#include <stdio.h>

void printArray(int* array, int count);
void selection_sort(int* array, int count);

int main(void) {
    
    int array[] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9, 0, 11};
    int arraySize = sizeof(array)/sizeof(array[0]);
    
    printf("============== Selection Sort ==============\n\n");
    printf("Before selection sort : ");
    
    // selection_sort is starting ..
    printArray(array, arraySize);
    
    selection_sort(array, arraySize);
    
    printf("After selection sort : ");
    printArray(array, arraySize);
    
    return 0;
}

void printArray(int* array, int count){
    
    for(int i = 0 ; i < count ; i++){
        printf("%d ", array[i]);
    }
    printf("\n\n");
}

void selection_sort(int* array, int count){
    
    int min, index, temp;
    for(int i = 0 ; i < count ; i++){
        min = 9999;
        index = i;
        for(int j = i; j < count ; j++){
            if(array[j] < min){
                min = array[j];
                index = j;
            }
        }
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }
    printf("Selection Sort Completed!\n\n");
}

