//  APSCI 160 Lab 4
//  Programmer: Abteen Arab
//  Student Number:66209651
//  Email Address: aarab02@student.ubc.ca
//  Date: Oct. 21, 2022
//  Lab Section: L1S
//  Program Description: Print a picture using triangle of the specified size and character on the screen. The picture should consists of a series triangle each with height 1 smaller than the previous until height is 1.
//

#include <stdio.h>

void printChars(int nChars, char printChar);
void printTri(int size, char printChar);
void printPic (int size);

int main(void) {
    printPic (5);
    return 0;
}

//Prints a line of char of type printChar, nChar number of times.
//Parameter: nChars - the number of characters to print
//Parameter: printChar - the character to print
void printChars(int nChars, char printChar){
    int countChars = 0;

    while (countChars < nChars)
    {
        printf("%c", printChar);
        countChars++;
    }
}

//Prints a trianlge of char strng and of height size.
//Parameter: size - the height of the triangle to print
//Parameter: printChar - the character used in triangle
void printTri(int size, char printChar){
    for (int i = 1; i <= size;i++){
        printChars(i,printChar);
        printf("\n");
    }
}

//Prints a picture using + and * chars. The picture consists of a tringle of + followed by triangled of * with height 1 smaller than the predecessor, repeated until the height of the trianlge is 1.
//Parameter: size - the height of the first triangle in the picture.
void printPic (int size){
    for (int i = size;i>0; i--){
        printTri(i, '+');
        i--;
        printTri(i, '*');
    }
}
