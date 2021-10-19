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
	 int  x,y=0;
while (1)
{
	print("Enter the number :\n");
    scan("%d",&x);
    for (int i=0 ;i<=x;i++)
    {
      y=i+y;
    }
   print ("%d\n",y);
}


	return 0;
}
