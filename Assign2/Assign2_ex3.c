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
	float  x,y,z;
	print("Enter three numbers:\n");
    scan("%f",&x);
    scan("%f",&y);
    scan("%f",&z);
    if (x>y&&x>z)
      {
           print("the largest number is %f \n",x);
      }
    else if (x<y&&y>z)
    {
         print("the largest number is %f \n",y);
    }
     else if (x<z&&y<z)
    {
         print("the largest number is %f \n",z);
    }
	return 0;
}
