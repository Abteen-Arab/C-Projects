//
//  main.c
//  preLab 3
//
//  Created by Abteen Arab on 2022-10-20.
//

#include <stdio.h>

int factorial(int num);

int main(int argc, const char * argv[]) {
    printf("The Fatorial of 3 is %i.\n", factorial (0));
}

int factorial(int num){
    if (num == 1 || num == 0){
        return 1;
    } else {
        return num *factorial(num-1);
    }
}
