//  APSCI 160 Lab 5
//  Programmer: Abteen Arab
//  Student Number:66209651
//  Email Address: aarab02@student.ubc.ca
//  Date: Oct. 28, 2022
//  Lab Section: L1S
//  Program Description: Take an list and return the sum of its square values from an indicated start and end index. If start and end are outside of the size of the array, then the sum will be -1 to indicate an index out of bound error.
//

#include <stdio.h>
#include <math.h>

int sumSquareRange (int data [], int size, int start, int end);

int main(void) {
    int data[10] = {1,1,3,4,5,6,7,8,9,10};
    int sum = sumSquareRange(data,10,0,13);
    printf("%i\n.", sum);
    return 0;
}

// Parameter data []: The list of numbers to be added.
// Parameter size: The # of elements in data - 1/the # of indexes.
// Parameter start: The start index of sum.
// Parameter End: The end index of sum.
// Purpose: Returns the sum the square of all the values data in starting from start to end+1, assuming that start and end are in range. If not, returns -1.
int sumSquareRange (int data [], int size, int start, int end){
    int sum = 0;
    if (end<=size && start<=size){
        for (int i = start; i<end+1; i++){
            sum+=pow(data[i],2);
        }
    } else {
        sum = -1;
    }
    
    return sum;
}
