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
	 int  x,y=1;
while (1)
{

	print("Enter the number :\n");
    scan("%d",&x);
    if (x>0)
    {


    for (int i=1 ;i<=x;i++)
    {
      y=i*y;
    }
   print ("%d\n",y);
    }
    else
        print ("it has no factorial !!\n");
        y=1;
}


	return 0;
}
