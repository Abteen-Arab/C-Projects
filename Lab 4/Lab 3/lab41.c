//  APSCI 160 Lab 4
//  Programmer: Abteen Arab
//  Student Number:66209651
//  Email Address: aarab02@student.ubc.ca
//  Date: Oct. 21, 2022
//  Lab Section: L1S
//  Program Description: Print a triangle of the specified size on the screen using the size of a triangle (assumed to be a positive integer value) and a character as the only parameters.
//

#include <stdio.h>

void printChars(int nChars, char printChar);
void printTri(int size, char strng);

int main(void) {
    printTri(19,'&');
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
//Parameter: c - the character used in triangle
void printTri(int size, char c){
    for (int i = 1; i <= size;i++){
        printChars(i,c);
        printf("\n");
    }
}
