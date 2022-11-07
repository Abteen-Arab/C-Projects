/*
 * Author:
 *
 * Purpose: Draw a histogram of positive integers entered by a user in
 *          the range 1 to 100, inclusive.  The user terminates input
 *          with -1.
 */

#include <stdio.h>
#include <stdlib.h>

void printRow(int count);

int main( void ){
    int count[10] = {0,0,0,0,0,0,0,0,0,0};
    int input;

    printf("Please enter a list of integers for the histogram and terminate with -1: ");
    scanf("%i", &input);

    while (input >0){
        if ((input - 1) / 10 == 0){
            count[0] += 1;
        } else if ((input - 1) / 10 == 1){
            count[1] += 1;
        } else if ((input - 1) / 10 == 2){
            count[2] += 1;
        } else if ((input - 1) / 10 == 3){
            count[3] += 1;
        } else if ((input - 1) / 10 == 4){
            count[4] += 1;
        } else if ((input - 1) / 10 == 5){
            count[5] += 1;
        } else if ((input - 1) / 10 == 6){
            count[6] += 1;
        } else if ((input - 1) / 10 == 7){
            count[7] += 1;
        } else if ((input - 1) / 10 == 8){
            count[8] += 1;
        } else {
            count[9] += 1;
        }
        scanf("%i", &input);
    }

    for (int i = 0; i<10; i++){
        if (i == 0) {
            printf(" %i -  %i: ", 1+10*(i), (i+1)*10);
        } else if (i == 9){
            printf("-1%i - %i: ", 1+10*(i), (i+1)*10);
        } else {
            printf("%i -  %i: ", 1+10*(i), (i+1)*10);
        }
        printRow(count[i]);
    }
    
    return 0;
}

void printRow(int count){
    for (int i = 0; i< count; i++){
        printf("*");
    }
    printf("\n");
}

