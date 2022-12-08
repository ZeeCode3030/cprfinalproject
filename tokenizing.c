/*
*****************************************************************************
                        Tokenizing - Version 1
Full Name  : Amirreza Memaryan
Student ID#: 108018227
Email      : amemaryan@myseneca.ca
Course     : CPR101NLL
Date       : 2022-11-23
Filename   : tokenizing.c
Purpose    : Outputs the number of words the user inputs and what they are
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300     // defining a macro for maximum amount of characters in a string
#include "tokenizing.h"     // importing a header file | we now have access to another file's contents

void main(void) {   // intialising the function "tokenizing"
/* Version 1 */

    printf("*** Start of Tokenizing Words Demo ***\n");     // standard output

    char words[BUFFER_SIZE];    // creating a string | delcaring an array of char variable
    char *nextword = NULL;      // declaring a char pointer | intialising it to NULL
    int wordsCounter;           // declaring an int variable

    do  // opening a do/while loop
    {
        printf("Type a few words separated by space (q - to quit):\n");     // output statement
        fgets(words, BUFFER_SIZE, stdin);   // prompts user for input | makes sure that it doesn't overexceed the buffer size | stores the input in a string array variable
        words[strlen(words) - 1] = '\0';    // changes the last index value in the string array to '\0'
        if (strcmp(words, "q") != 0)        // if statement | compares if the variable is the same as the letter "q" | if not, continue with the if statement
        {
            nextword = strtok(words, " ");  // initialising pointer's value to the word after every space in the string of arrays
            wordsCounter = 1;               // intiailsiing variable to equal 1
            while (nextword)                // while loop | condition being that the variable still has value | while "nextword" is not NULL
            {
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextword);   // outputs the number of words and what the words are
                nextword = strtok(NULL, " ");                               // initialising variable to store the next word in the string of arrays after the space
            }
        }
    } while (strcmp(words, "q") != 0);                  // repeat do/while loop as long as the user hasn't input the "q" letter

    printf("*** End of Tokenizing Words Demo ***\n");   // outputs ending statement

}   // end of the function
