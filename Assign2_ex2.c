/*
 * main.c
 *
 *  Created on: Oct 8, 2021
 *      Author: kerolous Aziz
 */
#include "stdio.h"
#define print(...) printf(__VA_ARGS__);fflush(stdin);fflush(stdout);
#define scan(...) scanf(__VA_ARGS__);fflush(stdin);fflush(stdout);
int main (void)
{
	char x;
	print("Enter a small letter :\n");
    scan("%c",&x);
    if (x=='a'|x=='e'|x=='i'|x=='o'|x=='u')
      {
           print("the letter is vowel \n");
      }
    else
    {
         print("the letter is not vowel\n ");
    }
	return 0;
}
