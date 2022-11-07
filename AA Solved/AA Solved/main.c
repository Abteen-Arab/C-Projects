//  Programmer: Abteen Arab
//  Student Number: 66209651
//  Term: 1
//  Section: 102
//  Program: E0_Solution_AA
//  Date: 2022-11-03
//

#include <stdio.h>
#define NUM_ROWS 5
#define NUM_COLS 5

int search(int value, int array[NUM_ROWS][NUM_COLS]);
int search2(int value, int array[NUM_ROWS][NUM_COLS]);
int search3(int value, int array[NUM_ROWS][NUM_COLS]);

//Question 1 Answers
int main(int argc, const char * argv[]) {
    //Question 1a
    printf("Questions 1a\n");
    printf("Output: i=3, sum=6\n");
    printf("\n");
    
    //Question 1b
    printf("Questions 1b\n");
    int i = 1, sum = 0;
        while (i <= 3) {
            sum += i;
            i++;
        }
        i--;
    printf("i=%d, sum=%d\n", i, sum);
    printf("\n");
    
}

// Question 2a
int search(int value, int array[NUM_ROWS][NUM_COLS]){
    _Bool isVal = 0;
    for (int i = 0; i<NUM_ROWS; i++){
        for (int j = 0; j<NUM_COLS;j++){
            if (array[i][j]==value) {
                isVal = 1;
                break;
            }
        }
    }
    return isVal;
}

// Question 2b
int search2(int value, int array[NUM_ROWS][NUM_COLS]){
    for (int i = 0; i<NUM_ROWS; i++){
            for (int j = 0; j<NUM_COLS; j++){
                if (array[i][j]==value) {
                    return 1;
                }
            }
        }
    return 0;
}

// Question 2c
int search3(int value, int array[NUM_ROWS][NUM_COLS]){
    int i = 0;
    int j = 0;
    _Bool isThere = 0;
    while (i<NUM_ROWS && !isThere){
        j = 0;
        while (j<NUM_COLS && !isThere){
            if (array[i][j] == value){
                isThere = 1;
            }
            j++;
        }
        i++;
    }
    return isThere;
}

