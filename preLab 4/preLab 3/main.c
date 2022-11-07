//
//  main.c
//  preLab 3
//
//  Created by Abteen Arab on 2022-10-20.
//

#include <stdio.h>
#include <math.h>

#define MAX 1200000
#define MIN 1

int factorial(int num);
int choose (int n, int r);
int getInputInRange (int min, int max);
void pascalTri(void);
double ln(double num, double error);

int main(int argc, const char * argv[]) {
    pascalTri();
    return 0;
}

int factorial(int num){
    if (num == 1 || num == 0){
        return 1;
    } else {
        return num * factorial(num-1);
    }
}

int choose (int n, int r){
    return factorial(n) / (factorial(n-r) * factorial(r));
}

int getInputInRange (int min, int max){
    int input;
    printf("Please enter a value: ");
    scanf("%i", &input);
    while (input>max||input<min){
        printf("error. Index out of bounds. \n");
        scanf("%i", &input);
    }
    return input;
}

void pascalTri(void){
    int n;
    n = getInputInRange(MIN, MAX)-1;
    for (int j = 0; j<n+1; j++){
        for (int i = 0; i<j+1; i++){
            printf("%i ", choose(j,i));
        }
        printf("\n");
    }
}

double ln(double num, double error){
    double sum = (num-1);
    for (int i = 2; fabs(sum)<=fabs(error);i++){
        sum += pow((num-1),i)/i;
    }
    return sum;
}

