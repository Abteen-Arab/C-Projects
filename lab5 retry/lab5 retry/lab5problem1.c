//
//  main.c
//  lab5 retry
//
//  Created by Abteen Arab on 2022-11-07.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    return 0;
}

int sumSquareStride (int arr[], int size, int stride_size){
    int sum = 0;
    for (int i = 0; i<size;i+=stride_size){
        sum += pow(arr[i],2);
    }
    return sum;
    
}
