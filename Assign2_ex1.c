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
	int x;
	print("Enter value of number to check :\n");
    scan("%d",&x);
    if (x%2==0)
      {
           print("the number is even \n");
      }
    else
    {
         print("the number is odd \n ");
    }
	return 0;
}
