//
//  main.c
//  pre-Lab 5
//
//  Created by Abteen Arab on 2022-10-28.
//

#include <stdio.h>
#include <math.h>

void negative(int r[], int g[],int b[], int size);
void rgb2grey(int R[], int G[], int B[], int imgSize);

int main(void) {
    return 0;
}

void negative(int r[], int g[],int b[], int size){
    int temp;
    for (int i = 0; i<size; i++){
        temp = r[i];
        r[i] = 255 -temp;
        temp = r[i];
        g[i] = 255 -temp;
        temp = r[i];
        b[i] = 255 -temp;
    }
    
}

void filterByChannel(int R[], int G[], int B[], int imgSize, int filterColour){
    for (int i = 0;i<imgSize;i++){
        if (filterColour == 0) {
            G[i]=0;
            B[i]=0;
        } else if (filterColour == 1){
            R[i]=0;
            B[i]=0;
        } else {
            R[i]=0;
            G[i]=0;
        }
    }
}

void rgb2grey(int R[], int G[], int B[], int imgSize){
    int maxR,maxG,maxB;
    maxR =R[0];
    maxG =G[0];
    maxB =B[0];
    for (int i = 1; i<imgSize; i++){
        if (R[i]>maxR) maxR = R[i];
        if (G[i]>maxG) maxR = G[i];
        if (B[i]>maxB) maxR = B[i];
    }
}
