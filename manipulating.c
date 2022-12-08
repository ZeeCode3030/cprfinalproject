/*///////////////////////////////////////////////////////////////////////////////////////
Name : Hephzibah Nick-Oshomaha
Email  : hnick-oshomah@myseneca.ca
Date   : 30th November 2022
Course : CPR101
Project: Final Project Manipulating Version 1
*///////////////////////////////////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS		//defined to allow user input
#define BUFFER_SIZE 80				//defines the macro size to be used for the strings 
#include "manipulating.h"			//includes the header file that has the structures and point libraries

void manipulating(void)
{
	/*This function is to append the user input string to another input string. it passes nothing and returns nothing */
	/* Version 1 */
	printf("*** Start of Concatenating Strings Demo ***\n");
	char string1[BUFFER_SIZE];								//to be used as the string address that will store the combined strings 
	char string2[BUFFER_SIZE];								//to be used as the string for the entry of user input to be appended to string1
	do														//loop for user input, loops continuously until the user enters q for quit
	{
		printf("Type the 1st string (q - to quit) :\n");
		fgets(string1, BUFFER_SIZE, stdin);					//user enter input of first string that will be appended which is stored in variable string1  
		string1[strlen(string1) - 1] = '\0';				//to store the length of the string to be used later

		if (strcmp(string1, "q") != 0)						//condition for what happens if the user doesn't input to quit the program. 
															//The program to enter the 2nd string is conditional on the output of the first
		{
			printf("Type the 2nd string:\n");
			fgets(string2, BUFFER_SIZE, stdin);				//for user to input the second string taht will be appended to the first
			string2[strlen(string2) - 1] = '\0';			//to store the length of user input for string2 to be used to determine length to know if the string to 
			strcat(string1, string2);						//the two user inputs are combined into string1
			printf("Concatenated string is \'%s\'\n", string1);

		}
	} while (strcmp(string1, "q") != 0);
	printf("***End of Indexing Strings Demo ***\n\n");

}




	/* Version 2 */
	//>> insert here


	/* Version 3 */
	//>> insert here

