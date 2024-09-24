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
	 int  x;
	print("Enter the number:\n");
    scan("%d",&x);

    if (x>0)
      {
           print("the  number is positive \n",x);
      }
    else if (x<0)
    {
         print("the number is negative \n",x);
    }
     else if (x==0)
    {
         print("it's zero !! \n",x);
    }
	return 0;
}
