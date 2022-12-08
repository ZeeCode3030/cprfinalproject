/*
*****************************************************************************
                        Converting - Version 1
Full Name  : Amirreza Memaryan
Student ID#: 108018227
Email      : amemaryan@myseneca.ca
Course     : CPR101NLL
Date       : 2022-11-23
Filename   : converting.c
Purpose    : Converts strings to int
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80      // defining a macro for maximum amount of characters in a string
#include "converting.h"     //importing a header file | we now have access to another file's contents

void main(void) {   // intialising the function "converting"
/* Version 1 */

    printf("*** Start of Converting Strings to int Demo ***\n");    // standard output

    char intstring[BUFFER_SIZE];    // creating a string | delcaring an array of char variable
    int intNumber;                  // declaring an int variable

    do  // opening a do/while loop
    {
        printf("Type an int numeric string (q - to quit):\n");  // output statement
        fgets(intstring, BUFFER_SIZE, stdin);       // prompts user for input | makes sure that it's doesn't overexceed the buffer size | stores the input in a string array variable
        intstring[strlen(intstring) - 1] = '\0';    // changes the last index value in the string array to '\0'

        if (strcmp (intstring, "q") != 0) {                 // if statement | compares if the variable is the same as the letter "q" | if not, continue with the if statement
            intNumber = atoi(intstring);                    // converting the char variable "intstring" to an int and storing the value in the variable "intNumber"
            printf("Converted number is %d\n", intNumber);  // output the variable "intNumber" | outputs the final converted number
        }

    } while (strcmp(intstring, "q") != 0);  // repeat do/while loop as long as the user hasn't input the "q" letter
    
    printf("*** End of Converting strings to int Demo ***\n");  // outputs ending statement
}   // end of the function
