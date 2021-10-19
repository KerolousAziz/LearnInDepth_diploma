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
	 char  x;
while (1){
	print("Enter the letter :\n");
    scan("%c",&x);
    print("%d \n",x);

    if ((x>65)&&(x<122))
      {
           print("this is alphabet !! \n",x);
      }
    else if ((x<=64)||(91<=x<=96)||(x>=123))
    {
         print("this  not  alphabet  \n",x);
    }
}
	return 0;
}
