//
//  main.cpp
//  bubble_sort
//
//  Created by Hanyoung Jeong on 2018. 3. 17..
//  Copyright © 2018년 Hanyoung Jeong. All rights reserved.
//

#include <stdio.h>

void printArray(int *array, int count);
void bubble_sort(int *array, int count);

int main(void){
    
    int array[] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    int arraySize = sizeof(array)/sizeof(array[0]);
    
    printf("===== Bubble sort =====");
    printf("before bubble sorting : \n\n");
    printArray(array, arraySize);
    
    // bubble sort is starting ...
    
    bubble_sort(array, arraySize);
    
    printf("After bubble sorting : \n\n");
    printArray(array, arraySize);
    
    return 0;
}

void bubble_sort(int *array, int count){
    
    int temp;
    for(int i = 0 ; i < count ; i++){
        for(int j = 0 ; j < count - 1 - i ; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    
}

void printArray(int *array, int count){
    
    for(int i = 0 ; i < count ; i++){
        printf("%d ", array[i]);
    }
    printf("\n\n");
    
}
