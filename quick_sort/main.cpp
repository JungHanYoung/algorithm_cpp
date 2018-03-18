//
//  main.cpp
//  quick_sort
//
//  Created by Hanyoung Jeong on 2018. 3. 17..
//  Copyright © 2018년 Hanyoung Jeong. All rights reserved.
//

#include <stdio.h>

// 전역변수
int data[] = {3, 5, 2, 4, 9, 10, 7, 1, 8, 6};
int dataLength = sizeof(data)/sizeof(data[0]);

void printArray(int *array, int count);
/*
PARAMETER
 - data : 정렬할 데이터
 - start : Pivot값
 - end : 마지막 인덱스 array.length - 1
 */
void quick_sort(int *data, int start, int end){
    if (start >= end){  // 원소가 1개인 경우
        return;
    }
    
    int pivot = start;    // Pivot은 첫번째 원소
    int i = start + 1;   // Pivot index에서 오른쪽으로 가며 Pivot값보다 큰 값을 찾기 위한 인덱스 ( 왼쪽 출발지점 )
    int j = end;        //  마지막 인덱스에서 왼쪽으로 가며 Pivot값보다 작은 값을 찾기 위한 인덱스 ( 오른쪽 출발지점 )
    int temp;
    
    while(i <= j){          // 엇갈릴 때까지 반복
        
        while(data[pivot] <= data[j] && j > start){    // 기준값보다 작을 때까지 인덱스가 왼쪽으로...
            j--;
        }
        while(data[pivot] >= data[i]){   // 기준값보다 클 때까지 인덱스가 오른쪽으로..
            i++;
        }
        if(i > j){  // 현재 엇갈린 상태면 작은 값과 키 값 교체
            temp = data[j];
            data[j] = data[pivot];
            data[pivot] = temp;
        } else{     // 엇갈리지 않았다면 큰 값과 작은 값 변경
            temp = data[j];
            data[j] = data[i];
            data[i] = temp;
        }
    }
    quick_sort(data, start, j - 1);     // Pivot 값의 왼쪽을 정렬
    quick_sort(data, j + 1, end);       // Pivot 값의 오른쪽을 정렬
}
// 내림차순 정렬
void quick_sort_dec(int *data, int start, int end){
    if (start >= end){  // 원소가 1개인 경우
        return;
    }
    
    int pivot = start;    // Pivot은 첫번째 원소
    int i = start + 1;   // Pivot index에서 오른쪽으로 가며 Pivot값보다 큰 값을 찾기 위한 인덱스 ( 왼쪽 출발지점 )
    int j = end;        //  마지막 인덱스에서 왼쪽으로 가며 Pivot값보다 작은 값을 찾기 위한 인덱스 ( 오른쪽 출발지점 )
    int temp;
    
    while(i <= j){          // 엇갈릴 때까지 반복
        
        while(data[pivot] >= data[j] && j > start){    // 기준값보다 클 때까지 인덱스가 왼쪽으로...
            j--;
        }
        while(data[pivot] <= data[i]){   // 기준값보다 작을 때까지 인덱스가 오른쪽으로..
            i++;
        }
        if(i > j){  // 현재 엇갈린 상태면 작은 값과 키 값 교체
            temp = data[j];
            data[j] = data[pivot];
            data[pivot] = temp;
        } else{     // 엇갈리지 않았다면 큰 값과 작은 값 교체
            temp = data[j];
            data[j] = data[i];
            data[i] = temp;
        }
    }
    quick_sort_dec(data, start, j - 1);     // Pivot 값의 왼쪽을 정렬
    quick_sort_dec(data, j + 1, end);       // Pivot 값의 오른쪽을 정렬
}

int main(void){
    
    printf("===== Quick Sort =====\n\n");
    printf("%d ", dataLength);
    printf("Before Quick Sort\n");
    printArray(data, dataLength);
    
    // Quick_sort is starting ..
    quick_sort(data, 0, dataLength - 1);
    
    printf("After Increment Quick Sort\n");
    printArray(data, dataLength);
    
    // Quick_sort is starting .. - Decrement
    quick_sort_dec(data, 0, dataLength - 1);
    printf("After Decrement Quick Sort\n");
    printArray(data, dataLength);
    
    return 0;
}

void printArray(int *array, int count){
    for(int i = 0 ; i < count ; i++){
        printf("%d ", array[i]);
    }
    printf("\n\n");
}
