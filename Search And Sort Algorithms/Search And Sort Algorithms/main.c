//
//  main.c
//  Search And Sort Algorithms
//
//  Created by Abteen Arab on 2022-11-06.
//

#include <stdio.h>

int linearSearch(int arr[],int size, int val);
int binarySearch(int arr[],int size, int val);
void InsertionSort(int arr[],int size);
void readAllElements (int arr[],int size);

int main(int argc, const char * argv[]) {
    int arr [10] = {10,9,8,7,6,5,4,3,2,1};
    InsertionSort(arr, 10);
    readAllElements(arr, 10);
    return 0;
}

int linearSearch (int arr[],int size, int val){
    _Bool isThere = 0;
    for (int i = 0; i<size && !isThere;i++){
        if (arr[i] == val){
            _Bool isThere = 1;
        }
    }
    return isThere;
}

int binarySearch (int arr[],int size, int val){
    int i = size /2;
    _Bool isThere = 0;
    int j = 4;
    while (!isThere && size/j != 0){
        if (arr[i]<val) {
            i -=size/j;
        } else if (arr[i]>val) {
            i +=size/j;
        } else {
            isThere = 1;
        }
        j*=2;
    }
    
    return isThere;
}

void InsertionSort (int arr[],int size){
    int temp;
    for (int i = 1; i<size; i++){
        int temp = arr[i];
        int j;
        for (j = i;temp<arr[j-1] && j>-1; j--){
        }
        arr[i] = arr[j];
        arr[j ]= temp;
    }
}

void readAllElements(int arr[],int size){
    for (int i = 0; i<size;i++){
        printf("%i\n", arr[i]);
    }
}
void writeAllElements(int arr[],int size){
    printf("Please Enter %i digits: ", size);
    for (int i = 0; i<size;i++){
        scanf("%i", &arr[i]);
    }
}

