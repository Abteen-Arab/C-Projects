//  APSCI 160 Lab 5
//  Programmer: Abteen Arab
//  Student Number:66209651
//  Email Address: aarab02@student.ubc.ca
//  Date: Oct. 28, 2022
//  Lab Section: L1S
//  Program Description: To find the dot product of two arrays
//

#include <stdio.h>

int dot (int arrayA[], int arrayB[], int size);

int main(void) {
    int arr1 [10] = {1,2,3,4,5,6,7,8,9,10};
    int arr2 [10] = {1,2,3,4,5,6,7,8,9,10};
    int dotProd = dot (arr1, arr2, 10);
    printf("%i\n.", dotProd);
    return 0;
}


// Parameter arrayA[]: The first list of number for the dot product.
// Parameter arrayB[]: The second list of number for the dot product.
// Parameter size: The size of the two arrays; i.e. there are no empty cells in the matrix.
// Purpose: To find the dot product of arrayA[] and arrayB[], which turns out to be the same as the dot procut of arrayB[] and arrayA[].
int dot (int arrayA[], int arrayB[], int size){
    int sum = 0;
    for (int i = 0; i<size;i++){
        sum+=arrayA[i]*arrayB[i];
    }
    return sum;
}
