//
//  main.c
//  pre-Lab 5
//
//  Created by Abteen Arab on 2022-10-28.
//

#include <stdio.h>
#include <math.h>

double mean (double data[],int size);
double var (double data[],int size);
double sdev (double data[],int size);
double minimum (double data[],int size);

int main(int argc, const char * argv[]) {
    double arr [10] = {1,2,3,4,5,6,7,8,9,10};
    printf("The average of the list is %.2lf.\n", mean(arr,10));
    return 0;
}

double mean (double data[],int size){
    double sum = 0;
    for (int i = 0; i<size;i++) {
        sum += data[i];
    }
    return sum/size;
}

double var (double data[],int size){
    double sum = 0;
    double avg = mean(data,size);
    for (int i = 0; i<size;i++) {
        sum += pow((data[i]-avg), 2);
    }
    return sum/(size-1);
}

double sdev (double data[],int size){
    return pow(var(data,size),0.5);
}

double minimum (double data[],int size){
    double minimum = data [0];
    for (int i = 1; i<size;i++){
        if ( data [i] < minimum){
            minimum = data[i];
        }
    }
    return minimum;
}
