//
//  main.c
//  Midterm 2, set 1
//
//  Created by Abteen Arab on 2022-11-07.
//

#include <stdio.h>
#include <math.h>

#define TRUE 1
#define FALSE 0


//question A
int numGreater (int arr [], int size, int threshold);
int sameArray (int arr1[],int arr2[],int size);
int abs (int val);

//question B
void printStars (int numStars);
void printRect (int height, int width);
void printPic (int size);

//question C
double meanTemp (FILE *File, double threshold);

//Question E
int maxDiff (int arr[], int size);

//question G;
void printDashed( int size, int position);


int main(int argc, const char * argv[]) {
    
    return 0;
}

int numGreater (int arr [], int size, int threshold){
    int count = 0;
    for (int i = 0; i<size; i++){
        if (arr[i]>threshold) count++;
    }
    return count;
}

int sameArray (int arr1[],int arr2[],int size){
    _Bool isSame = 1;
    for (int i = 0; i<size && isSame; i++){
        if(arr1[i] != arr2[i]) isSame = 0;
    }
    if (isSame == 1) return TRUE;
    return FALSE;
}

void printStars(int numStars){
    for (int i = 0; i<numStars; i++) printf("* ");
}

void printRect (int height, int width){
    for (int i = 0; i<height; i++){
        printStars(width);
        printf("\n");
    }
}

void printPic (int size){
    for (int i = size; i>0;i--){
        printRect (size, size*i);
    }
}

double meanTemp (FILE *File, double threshold){
    double val;
    double sum = 0;
    double count = 0;
    double mean = 0;
    
    while (fscanf(File, "%lf", &val)  == 1){
        if (val > threshold){
            sum += val;
            count++;
        }
    }
    if (count > 0) mean = sum/count;
    return mean;
}

int maxDiff (int arr[], int size){
    int maxDiff = abs(arr[0]-arr[1]);
    for (int i = 1; i<size;i++){
        if (abs(arr[i]-arr[i-1])>maxDiff){
            maxDiff =abs(arr[i]-arr[i-1]);
        }
    }
    return maxDiff;
}

int abs (int val){
    if (val<0) {
        return val * -1;
    }
    return val;
}

void printDashed( int size, int position) {
    for(int count = 0; count < size; count++ ) {
        if( count % position == 0 ) printf(" ");
        else printf( "*" );
    }
    printf("\n");
}


