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
	int x,y;
	print("Enter value of a:\n");
	scan("%d",&x);
	print(" Enter value of b:\n");
	scan("%d",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	print("After swapping, value of a = %d \n",x);
	print("After swapping, value of b = %d \n",y);

	return 0;
}
