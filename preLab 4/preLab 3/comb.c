//
//  main.c
//  preLab 3
//
//  Created by Abteen Arab on 2022-10-20.
//

#include <stdio.h>

int factorial(int num);
int choose (int n, int r);

int main(int argc, const char * argv[]) {
    printf("4 choose 2 is %i.", choose(4,2));
    return 0;
}

int factorial(int num){
    if (num == 1 || num == 0){
        return 1;
    } else {
        return num *factorial(num-1);
    }
}

int choose (int n, int r){
    return factorial(n) / (factorial(n-r) * factorial(r));
}
